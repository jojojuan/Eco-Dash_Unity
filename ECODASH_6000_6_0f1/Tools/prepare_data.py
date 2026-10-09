"""Generates deterministic map layouts and original synthesized audio."""
from pathlib import Path
import random,json,math,wave,struct
root=Path(__file__).resolve().parents[1]
levels=[]
for n in range(1,4):
 rng=random.Random(20261006+n);w=14+4*n;h=10+2*n
 used=[(0,-5,1.5),(0,-3,1.5)]
 def point(radius):
  for _ in range(10000):
   x=rng.uniform(-w+3.5,w-3.5);y=rng.uniform(-h+3,h*.4-1.4)
   if all(math.hypot(x-a,y-b)>radius+r+.5 for a,b,r in used):
    used.append((x,y,radius));return dict(x=round(x,3),y=round(y,3),kind=0)
  raise RuntimeError('Map packing failed')
 rocks=[point(.85) for _ in range([4,9,16][n-1])]
 water=[point(1.5) for _ in range(0 if n==1 else n)]
 trash=[]
 for i in range(n*10):
  p=point(.2);p['kind']=i%4;trash.append(p)
 levels.append(dict(level=n,halfWidth=w,halfHeight=h,rocks=rocks,water=water,trash=trash))
(root/'Assets/Art/LevelLayouts.json').write_text(json.dumps(dict(levels=levels),indent=2))
rate=22050

def save(name,seconds,fn):
 p=root/'Assets/Audio'/name;p.parent.mkdir(parents=True,exist_ok=True)
 with wave.open(str(p),'wb') as f:
  f.setnchannels(1);f.setsampwidth(2);f.setframerate(rate)
  f.writeframes(b''.join(struct.pack('<h',int(max(-1,min(1,fn(i/rate)))*32767)) for i in range(int(rate*seconds))))

def tone(t,f):return math.sin(2*math.pi*f*t)+.18*math.sin(4*math.pi*f*t)
notes=[64,67,71,67,62,66,69,66,60,64,67,64,62,66,69,71,64,67,72,71,62,66,69,67,60,64,67,72,62,66,69,62]
def music(t):
 step=int(t/.4);u=t% .4;freq=440*2**((notes[step%32]-69)/12)
 env=min(1,u/.02)*math.exp(-u*7)*(min(1,(.4-u)/.025))
 bass=[40,38,36,38][(step//4)%4];bassfreq=440*2**((bass-69)/12)
 return .18*tone(u,freq)*env+.08*math.sin(2*math.pi*bassfreq*u)*env
save('Music/BeachLoop.wav',12.8,music)
save('Effects/Collect.wav',.18,lambda t:.25*tone(t,780+1500*t)*math.sin(math.pi*t/.18)**2)
save('Effects/Deposit.wav',.4,lambda t:.22*tone(t,440 if t<.2 else 660)*math.sin(math.pi*(t%.2)/.2)**2)
save('Effects/Victory.wav',1.2,lambda t:.22*tone(t,[523,659,784,1047][min(3,int(t/.3))])*math.sin(math.pi*(t%.3)/.3)**2)
print('Generated 3 maps, 60 trash items, 4 WAV files.')

"""Offline checks. Does not replace Unity compilation or Play Mode testing."""
from pathlib import Path
import json,math,wave,re
from collections import deque
root=Path(__file__).resolve().parents[1]
layouts=json.loads((root/'Assets/Art/LevelLayouts.json').read_text())['levels']
checks=[]
for m in layouts:
 n=m['level']; assert len(m['trash'])==10*n
 w,h=m['halfWidth'],m['halfHeight'];left,right=-w+2,w-2;bottom,top=-h+1.5,h*.4
 # Walkability uses a conservative player radius and exact collider geometry.
 step=.25
 def free(x,y):
  cy=y+.28
  if not(left+.31<x<right-.31 and bottom+.31<cy<top-.31):return False
  if abs(x)<.45+.31 and abs(cy-(-3+.35))<.325+.31:return False
  for p in m['rocks']:
   if math.hypot(x-p['x'],cy-(p['y']+.33))<.64+.31:return False
  for p in m['water']:
   if abs(x-p['x'])<1.1+.31 and abs(cy-p['y'])<.45+.31:return False
  return True
 nx=int((right-left)/step)+1;ny=int((top-bottom)/step)+1
 def xy(k):return left+k[0]*step,bottom+k[1]*step
 start=(round((0-left)/step),round((-5-bottom)/step));q=deque([start]);seen={start}
 assert free(*xy(start))
 while q:
  a,b=q.popleft()
  for nxt in [(a+1,b),(a-1,b),(a,b+1),(a,b-1)]:
   if nxt in seen or not(0<=nxt[0]<nx and 0<=nxt[1]<ny):continue
   if free(*xy(nxt)):seen.add(nxt);q.append(nxt)
 coords=[xy(k) for k in seen]
 for p in m['trash']:
  assert any(math.hypot(x-p['x'],y-p['y'])<1.1 for x,y in coords),f'Unreachable trash: {n}, {p}'
 assert any(math.hypot(x,y+3)<1.5 for x,y in coords)
 checks.append(f'PASS level {n}: {n*10} accessible residues, reachable bin, {len(m["rocks"])} rocks, {len(m["water"])} pools')
for p in (root/'Assets/Audio').rglob('*.wav'):
 with wave.open(str(p)) as f:assert f.getnframes()>0 and f.getnchannels()==1
checks.append('PASS: 4 valid WAV files')
rects=json.loads((root/'Assets/Art/SpriteRects.json').read_text())['sprites']
assert len(rects)==16
for r in rects:assert 0<=r['x']<1254 and 0<=r['y']<1254 and r['x']+r['width']<=1254 and r['y']+r['height']<=1254
checks.append('PASS: 16 sprite rectangles within atlas')
for p in (root/'Assets').rglob('*.cs'):
 s=p.read_text();s=re.sub(r'"(?:\\.|[^"\\])*"','""',s);s=re.sub(r'//[^\n]*|/\*[\s\S]*?\*/','',s)
 stack=[];pairs={'}':'{',')':'(',']':'['}
 for c in s:
  if c in '{([':stack.append(c)
  elif c in '})]':assert stack and stack.pop()==pairs[c],str(p)
 assert not stack,str(p)
checks.append('PASS: C# delimiter balance (not a compiler)')
checks.append('NOT RUN: Unity compilation, Editor validation, Play Mode, Windows build. Unity is not installed in the delivery environment.')
print('\n'.join(checks))
(root/'VALIDACION.txt').write_text('\n'.join(checks)+'\n')

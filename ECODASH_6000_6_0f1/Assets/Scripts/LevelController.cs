using System.Collections;
using UnityEngine;
using UnityEngine.UI;
namespace EcoDash {
public class LevelController:MonoBehaviour {
    public int levelNumber=1;
    public PlayerController player;
    public Transform container;
    public TrashItem[] trash;
    public GameRules Rules {get;private set;}
    public bool Running {get{return Rules!=null&&!intro&&!paused&&!ending&&!Rules.Finished;}}
    bool intro=true,paused,ending;GameSession session;
    Text score,bag,progress,timer,prompt,binDirection;Transform root;GameObject pausePanel;
    TrashItem nearby;bool atBin;float messageUntil;string message;
    IEnumerator Start(){
        Time.timeScale=1;session=GameSession.Ensure();session.CurrentLevel=levelNumber;Rules=new GameRules(levelNumber);
        if(!player)player=FindFirstObjectByType<PlayerController>();player.level=this;
        if(trash==null||trash.Length==0)trash=FindObjectsByType<TrashItem>(FindObjectsSortMode.None);
        root=UiKit.Canvas("GameplayHUD").transform;BuildHud();
        var cover=UiKit.Panel(root,Vector2.zero,new Vector2(1280,720),new Color(.035f,.12f,.20f,.94f));
        string[] titles={"PLAYA LIMPIA","PLAYA CONTAMINADA","GRAN LIMPIEZA"};
        UiKit.Label(cover.transform,"NIVEL "+levelNumber,new Vector2(0,140),new Vector2(1100,100),60,UiKit.Mint);
        UiKit.Label(cover.transform,titles[levelNumber-1],new Vector2(0,40),new Vector2(1100,80),42,Color.white);
        UiKit.Label(cover.transform,"Recoge "+Rules.Target+" residuos y deposítalos en el contenedor.\nTienes "+(levelNumber+2)+" minutos. ¡Vamos!",new Vector2(0,-95),new Vector2(1100,130),28,UiKit.Gold);
        yield return new WaitForSecondsRealtime(2.8f);Destroy(cover.gameObject);intro=false;
    }
    void BuildHud(){
        UiKit.Panel(root,new Vector2(0,315),new Vector2(1280,90),UiKit.Navy);
        if(session.Art)UiKit.Picture(root,session.Art.idle[0],new Vector2(-584,315),new Vector2(78,78));
        score=UiKit.Label(root,"",new Vector2(-405,315),new Vector2(250,75),23,Color.white);
        progress=UiKit.Label(root,"",new Vector2(-125,315),new Vector2(295,75),23,UiKit.Mint);
        bag=UiKit.Label(root,"",new Vector2(145,315),new Vector2(230,75),23,Color.white);
        timer=UiKit.Label(root,"",new Vector2(365,315),new Vector2(200,75),23,UiKit.Gold);
        UiKit.Button(root,"PAUSA",new Vector2(555,315),new Vector2(145,50),TogglePause);
        UiKit.Panel(root,new Vector2(0,-313),new Vector2(1020,62),new Color(.035f,.12f,.20f,.94f));
        prompt=UiKit.Label(root,"WASD / FLECHAS: MOVER · E: INTERACTUAR",new Vector2(0,-313),new Vector2(1000,60),24,Color.white);
        binDirection=UiKit.Label(root,"",new Vector2(0,241),new Vector2(760,55),22,UiKit.Navy);
        pausePanel=UiKit.Panel(root,Vector2.zero,new Vector2(1280,720),new Color(.035f,.12f,.20f,.97f)).gameObject;
        UiKit.Label(pausePanel.transform,"JUEGO PAUSADO",new Vector2(0,160),new Vector2(950,100),48,Color.white);
        UiKit.Button(pausePanel.transform,"CONTINUAR",new Vector2(0,35),new Vector2(390,60),TogglePause);
        UiKit.Button(pausePanel.transform,"REINICIAR NIVEL",new Vector2(0,-55),new Vector2(390,60),()=>session.StartLevel(levelNumber));
        UiKit.Button(pausePanel.transform,"VOLVER AL MENÚ",new Vector2(0,-145),new Vector2(390,60),()=>session.Go(0));pausePanel.SetActive(false);
    }
    void Update(){
        if(Rules==null)return;
        if(GameInput.Pressed(KeyCode.Escape)&&!intro&&!ending)TogglePause();
        if(Running){Rules.Tick(Time.deltaTime);if(Rules.Lost){Finish(false);return;}FindNearby();}
        score.text="PUNTOS: "+Rules.Score;progress.text="BASURA: "+Rules.Deposited+"/"+Rules.Target;
        bag.text="BOLSA: "+Rules.Bag+"/5";bag.color=Rules.Bag==5?UiKit.Gold:Color.white;
        timer.text=Clock(Rules.Remaining);timer.color=Rules.Remaining<30?new Color(1,.4f,.35f):UiKit.Gold;
        if(Running){
            prompt.text=Time.time<messageUntil?message:atBin?"PRESIONA E PARA DEPOSITAR":Rules.Bag==5?"BOLSA LLENA · BUSCA EL CONTENEDOR":nearby?"PRESIONA E PARA RECOGER":"WASD / FLECHAS: MOVER · E: RECOGER";
            Vector2 delta=container.position-player.transform.position;
            binDirection.text="CONTENEDOR: "+(delta.magnitude<1.8f?"AQUÍ":(delta.x<-.8f?"IZQUIERDA ":delta.x>.8f?"DERECHA ":"")+(delta.y<-.8f?"ABAJO":delta.y>.8f?"ARRIBA":""))+"  ·  "+Mathf.RoundToInt(delta.magnitude)+" m";
        }
    }
    void FindNearby(){
        atBin=Vector2.Distance(player.transform.position,container.position)<1.8f;nearby=null;float best=1.25f;
        foreach(var item in trash){if(!item||item.Collected)continue;float d=Vector2.Distance(player.transform.position,item.transform.position);if(d<best){nearby=item;best=d;}}
    }
    public void Interact(){
        if(!Running)return;FindNearby();
        if(atBin){int n=Rules.Deposit();Tell(n>0?"¡DEPOSITASTE "+n+" RESIDUOS! +"+(n*25)+" PUNTOS":"TU BOLSA ESTÁ VACÍA");if(n>0){session.Sound(session.Art.depositSound);player.GetComponent<SpriteAnimator>().Pickup();}if(Rules.Won)Finish(true);return;}
        if(nearby){if(Rules.Collect()){nearby.Collect();player.GetComponent<SpriteAnimator>().Pickup();session.Sound(session.Art.collectSound);}else Tell("BOLSA LLENA · REGRESA AL CONTENEDOR");}
    }
    void Tell(string s){message=s;messageUntil=Time.time+1.6f;}
    public void TogglePause(){if(intro||ending||Rules==null||Rules.Finished)return;paused=!paused;Time.timeScale=paused?0:1;pausePanel.SetActive(paused);}
    void Finish(bool win){if(ending)return;ending=true;session.Result=Rules;if(win){ProgressStore.SaveWin(Rules);player.GetComponent<SpriteAnimator>().celebrating=true;session.Sound(session.Art.victorySound);}StartCoroutine(EndDelay(win));}
    IEnumerator EndDelay(bool win){Tell(win?"¡PLAYA LIMPIA!":"SE ACABÓ EL TIEMPO");prompt.text=message;yield return new WaitForSecondsRealtime(win?1.2f:.4f);session.Go(win?6:7);}
    public static string Clock(float seconds){int s=Mathf.CeilToInt(seconds);return (s/60).ToString("00")+":"+(s%60).ToString("00");}
    void OnDestroy(){Time.timeScale=1;}
}
}

using UnityEngine;
using UnityEngine.UI;
namespace EcoDash {
public class ScreenController:MonoBehaviour {
    public int screen;
    GameSession session;Transform root;
    void Start(){
        Time.timeScale=1;session=GameSession.Ensure();root=UiKit.Canvas("ScreenUI").transform;
        if(session.Art&&session.Art.beach){var bg=UiKit.Picture(root,session.Art.beach,Vector2.zero,new Vector2(1280,720));bg.preserveAspect=false;}
        UiKit.Panel(root,Vector2.zero,new Vector2(1280,720),new Color(.02f,.09f,.15f,.36f));
        if(screen==0)Menu();else if(screen==1)Levels();else if(screen==2)Instructions();else if(screen==9)Credits();else Results();
    }
    void Title(string t,string sub){UiKit.Label(root,t,new Vector2(0,263),new Vector2(1150,90),44,Color.white);UiKit.Label(root,sub,new Vector2(0,205),new Vector2(1100,60),22,UiKit.Mint);}
    void Back(){UiKit.Button(root,"VOLVER AL MENÚ",new Vector2(0,-285),new Vector2(350,52),()=>session.Go(0));}
    void Menu(){
        UiKit.Panel(root,new Vector2(-300,0),new Vector2(550,650),new Color(.035f,.12f,.20f,.96f));
        UiKit.Label(root,"ECODASH",new Vector2(-300,263),new Vector2(510,75),58,UiKit.Mint);
        UiKit.Label(root,"CHANCHITO:\nLIMPIEMOS LA PLAYA",new Vector2(-300,183),new Vector2(510,85),31,Color.white);
        string[] labels={"JUGAR","NIVELES","CÓMO JUGAR","CRÉDITOS","SALIR"};
        for(int i=0;i<5;i++){int n=i;UiKit.Button(root,labels[i],new Vector2(-300,65-i*65),new Vector2(390,52),()=>{switch(n){case 0:session.StartLevel(1);break;case 1:session.Go(1);break;case 2:session.Go(2);break;case 3:session.Go(9);break;default:session.Quit();break;}});}
        if(session.Art){var hero=UiKit.Picture(root,session.Art.celebrate[0],new Vector2(300,35),new Vector2(350,350));var a=hero.gameObject.AddComponent<UiSpriteAnimation>();a.frames=session.Art.celebrate;}
        UiKit.Label(root,"UNA PEQUEÑA BOLSA.\nUN GRAN CAMBIO.",new Vector2(300,-190),new Vector2(540,100),32,UiKit.Navy);
        UiKit.Label(root,"Explora · Recoge · Protege",new Vector2(300,-270),new Vector2(520,60),23,UiKit.Navy);
    }
    void Levels(){
        Title("ELIGE TU PLAYA","Cada playa limpia abre una nueva aventura");
        string[] names={"PLAYA LIMPIA","PLAYA CONTAMINADA","GRAN LIMPIEZA"};
        for(int i=1;i<=3;i++){
            int n=i;float x=(i-2)*390;bool open=i<=ProgressStore.Unlocked;
            var panel=UiKit.Panel(root,new Vector2(x,-15),new Vector2(355,350),UiKit.Navy);
            UiKit.Label(panel.transform,"0"+i,new Vector2(0,120),new Vector2(260,60),48,UiKit.Gold);
            UiKit.Label(panel.transform,names[i-1],new Vector2(0,59),new Vector2(340,55),24,Color.white);
            UiKit.Label(panel.transform,(i*10)+" residuos  /  "+(i+2)+" minutos\nRécord: "+ProgressStore.Best(i),new Vector2(0,-4),new Vector2(330,70),20,UiKit.Mint);
            UiKit.Button(panel.transform,open?(ProgressStore.Completed(i)?"VOLVER A JUGAR":"JUGAR"):"BLOQUEADO",new Vector2(0,-110),new Vector2(270,54),()=>session.StartLevel(n),open);
            if(!open)UiKit.Lock(panel.transform,new Vector2(135,120));
        }Back();
    }
    void Instructions(){
        Title("CÓMO JUGAR","La playa necesita tus pequeñas grandes acciones");
        var p=UiKit.Panel(root,new Vector2(0,-20),new Vector2(990,350),UiKit.Navy);
        UiKit.Label(p.transform,"W A S D  /  FLECHAS     Mover al chanchito\nE     Recoger o depositar cuando estés cerca\nESC     Pausar y continuar\n\nLleva hasta 5 residuos y busca el contenedor verde.\nDeposita 10, 20 o 30 residuos antes de que termine el tiempo.\nCada residuo depositado vale 25 puntos.\nAl ganar: +2 puntos por cada segundo restante.",Vector2.zero,new Vector2(950,320),25,Color.white);Back();
    }
    void Credits(){
        Title("CRÉDITOS","ECODASH · Chanchito: limpiemos la playa");
        var p=UiKit.Panel(root,new Vector2(0,-10),new Vector2(1040,350),UiKit.Navy);
        UiKit.Label(p.transform,"Noel",Vector2.zero,new Vector2(1000,330),44,Color.white);Back();
    }
    void Results(){
        if(screen==8){
            Title("¡FELICIDADES!","¡HAS LIMPIADO TODA LA PLAYA!");
            if(session.Art){var hero=UiKit.Picture(root,session.Art.celebrate[0],new Vector2(0,25),new Vector2(260,260));hero.gameObject.AddComponent<UiSpriteAnimation>().frames=session.Art.celebrate;}
            UiKit.Panel(root,new Vector2(0,-155),new Vector2(1020,70),UiKit.Navy);
            UiKit.Label(root,"Pequeñas acciones pueden generar grandes cambios.",new Vector2(0,-155),new Vector2(1000,65),29,Color.white);
            UiKit.Button(root,"JUGAR DE NUEVO",new Vector2(-220,-260),new Vector2(360,55),()=>session.StartLevel(1));
            UiKit.Button(root,"VOLVER AL MENÚ",new Vector2(220,-260),new Vector2(360,55),()=>session.Go(0));return;
        }
        bool win=screen==6;var r=session.Result;
        Title(win?"¡PLAYA LIMPIA!":"SE ACABÓ EL TIEMPO",win?"¡Excelente trabajo!":"NO LOGRASTE LIMPIAR LA PLAYA");
        var p=UiKit.Panel(root,new Vector2(0,20),new Vector2(820,245),UiKit.Navy);
        string stats=r==null?"Juega un nivel para ver tus resultados.":"PUNTUACIÓN: "+r.Score+"\nRESIDUOS DEPOSITADOS: "+r.Deposited+"/"+r.Target+"\nTIEMPO RESTANTE: "+LevelController.Clock(r.Remaining);
        UiKit.Label(p.transform,stats,Vector2.zero,new Vector2(800,220),32,Color.white);
        if(win)UiKit.Button(root,session.CurrentLevel==3?"VER FINAL":"SIGUIENTE NIVEL",new Vector2(0,-160),new Vector2(430,55),()=>{if(session.CurrentLevel==3)session.Go(8);else session.StartLevel(session.CurrentLevel+1);});
        UiKit.Button(root,win?"REPETIR NIVEL":"REINTENTAR",new Vector2(-225,-250),new Vector2(380,55),()=>session.StartLevel(session.CurrentLevel));
        UiKit.Button(root,"MENÚ PRINCIPAL",new Vector2(225,-250),new Vector2(380,55),()=>session.Go(0));
    }
}
}

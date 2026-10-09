using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
namespace EcoDash {
public class GameSession : MonoBehaviour {
    public static GameSession Instance {get;private set;}
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void ResetStatics(){Instance=null;}
    public static GameSession Ensure(){
        if(!Instance) new GameObject("GameSession").AddComponent<GameSession>();
        return Instance;
    }
    public int CurrentLevel=1;
    public GameRules Result;
    public ArtCatalog Art;
    public bool Loading {get;private set;}
    AudioSource music, effects;
    public static readonly string[] Scenes={"00_MainMenu","01_LevelSelect","02_HowToPlay","03_Level01","04_Level02","05_Level03","06_Victory","07_GameOver","08_Final","09_Credits"};
    void Awake(){
        if(Instance&&Instance!=this){Destroy(gameObject);return;}
        Instance=this;DontDestroyOnLoad(gameObject);Time.timeScale=1;
        Art=Resources.Load<ArtCatalog>("ArtCatalog");
        music=gameObject.AddComponent<AudioSource>();effects=gameObject.AddComponent<AudioSource>();
        music.loop=true;music.volume=.18f;
        if(Art&&Art.music){music.clip=Art.music;music.Play();}
    }
    public void Sound(AudioClip clip){if(clip)effects.PlayOneShot(clip,.55f);}
    public void StartLevel(int n){if(Loading)return;CurrentLevel=Mathf.Clamp(n,1,3);Result=null;Go(CurrentLevel+2);}
    public void Go(int scene){if(!Loading)StartCoroutine(Load(scene));}
    IEnumerator Load(int scene){
        Loading=true;Time.timeScale=1;
        var c=UiKit.Canvas("Loading",200);DontDestroyOnLoad(c.gameObject);
        UiKit.Panel(c.transform,Vector2.zero,new Vector2(1280,720),UiKit.Navy);
        UiKit.Label(c.transform,"CARGANDO LA PLAYA…",new Vector2(0,30),new Vector2(1000,80),36,Color.white);
        var t=UiKit.Label(c.transform,"Preparando una nueva aventura",new Vector2(0,-40),new Vector2(900,50),22,UiKit.Mint);
        yield return null;
        var op=SceneManager.LoadSceneAsync(Scenes[scene]);
        while(!op.isDone){t.text="Cargando "+Mathf.RoundToInt(op.progress/.9f*100)+"%";yield return null;}
        Destroy(c.gameObject);Loading=false;
    }
    public void Quit(){
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying=false;
#else
        Application.Quit();
#endif
    }
}
}

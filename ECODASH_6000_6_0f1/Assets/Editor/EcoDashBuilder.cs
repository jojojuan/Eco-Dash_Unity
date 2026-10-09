using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEditor.U2D.Sprites;
namespace EcoDash.Editor {
[InitializeOnLoad]
public static class EcoDashBuilder {
    const string Marker="Assets/Resources/ECODASH_READY.txt";
    static ArtCatalog art;
    static bool building;
    static GameObject playerPrefab,trashPrefab,binPrefab,obstaclePrefab;
    [Serializable]class AtlasRect { public string name;public int x,y,width,height; }
    [Serializable]class SpriteRects { public AtlasRect[] sprites; }
    [Serializable]public class Point {public float x,y;public int kind;}
    [Serializable]public class Layout {public int level;public float halfWidth,halfHeight;public Point[] trash,rocks,water;}
    [Serializable]public class Layouts {public Layout[] levels;}
    static EcoDashBuilder(){EditorApplication.delayCall+=AutoBuild;}
    static void AutoBuild(){
        if(building)return;
        if(Application.isPlaying||EditorApplication.isCompiling||EditorApplication.isUpdating){EditorApplication.delayCall+=AutoBuild;return;}
        if(!File.Exists(Marker)&&File.Exists("Assets/Art/Beach.png"))Build();
    }
    [MenuItem("ECODASH/1. Preparar proyecto (primera vez)")]
    public static void Build(){
        if(Application.isPlaying||building)return;
        if(File.Exists(Marker)){Debug.Log("ECODASH ya está preparado. Las escenas están en Assets/Scenes.");EditorSceneManager.OpenScene("Assets/Scenes/00_MainMenu.unity");return;}
        building=true;
        try {
        foreach(var d in new[]{"Scenes","Prefabs","Animations","Resources","Characters/Player","Environment/Beach","Trash/Bottle","Trash/Can","Trash/Bag","Trash/Paper","UI/Buttons","UI/Icons","Materials"})Directory.CreateDirectory("Assets/"+d);
        AssetDatabase.Refresh();
        CreateArt();CreatePrefabs();CreateClips();
        var layouts=JsonUtility.FromJson<Layouts>(File.ReadAllText("Assets/Art/LevelLayouts.json"));
        var scenes=new List<EditorBuildSettingsScene>();
        for(int i=0;i<GameSession.Scenes.Length;i++){
            var scene=EditorSceneManager.NewScene(NewSceneSetup.EmptyScene,NewSceneMode.Single);
            var cam=new GameObject("Main Camera",typeof(Camera),typeof(AudioListener));cam.tag="MainCamera";cam.transform.position=new Vector3(0,0,-10);
            var camera=cam.GetComponent<Camera>();camera.orthographic=true;camera.orthographicSize=7;camera.backgroundColor=UiKit.Navy;
            if(i>=3&&i<=5)CreateLevel(layouts.levels[i-3],camera);
            else new GameObject("ScreenController").AddComponent<ScreenController>().screen=i;
            string path="Assets/Scenes/"+GameSession.Scenes[i]+".unity";EditorSceneManager.SaveScene(scene,path);scenes.Add(new EditorBuildSettingsScene(path,true));
        }
        EditorBuildSettings.scenes=scenes.ToArray();
        PlayerSettings.companyName="ECODASH";PlayerSettings.productName="ECODASH - Chanchito";
        PlayerSettings.defaultScreenWidth=1280;PlayerSettings.defaultScreenHeight=720;PlayerSettings.fullScreenMode=FullScreenMode.Windowed;
        PlayerSettings.resizableWindow=true;PlayerSettings.colorSpace=ColorSpace.Gamma;
        File.WriteAllText(Marker,"Generated. Keep this file: it prevents overwriting your edited scenes.");
        AssetDatabase.SaveAssets();AssetDatabase.Refresh();EditorSceneManager.OpenScene("Assets/Scenes/00_MainMenu.unity");
        Debug.Log("ECODASH preparado para Unity 6.6: 10 escenas, sprites, animaciones y prefabs. Pulsa PLAY.");
        } finally {building=false;}
    }
    static TextureImporter Import(string p){
        var t=(TextureImporter)AssetImporter.GetAtPath(p);t.textureType=TextureImporterType.Sprite;t.filterMode=FilterMode.Point;t.textureCompression=TextureImporterCompression.Uncompressed;t.mipmapEnabled=false;t.maxTextureSize=2048;t.alphaIsTransparency=true;t.npotScale=TextureImporterNPOTScale.None;return t;
    }
    static void CreateArt(){
        string sheet="Assets/Art/ECODASH_Sprites.png";
        var t=Import(sheet);t.spriteImportMode=SpriteImportMode.Multiple;t.spritePixelsPerUnit=160;
        var rects=JsonUtility.FromJson<SpriteRects>(File.ReadAllText("Assets/Art/SpriteRects.json"));
        // Unity 6: use the Sprite Editor data provider instead of TextureImporter.spritesheet.
        t.SaveAndReimport();
        var factories=new SpriteDataProviderFactories();factories.Init();
        var provider=factories.GetSpriteEditorDataProviderFromObject(AssetImporter.GetAtPath(sheet));
        if(provider==null)throw new InvalidOperationException("No se pudo abrir el importador 2D Sprite.");
        provider.InitSpriteEditorDataProvider();
        var existing=provider.GetSpriteRects().ToDictionary(r=>r.name,r=>r.spriteID);
        var slices=rects.sprites.Select(r=>new SpriteRect{
            name=r.name,rect=new Rect(r.x,r.y,r.width,r.height),
            alignment=SpriteAlignment.BottomCenter,pivot=new Vector2(.5f,0),
            spriteID=existing.TryGetValue(r.name,out var id)?id:GUID.Generate()
        }).ToArray();
        provider.SetSpriteRects(slices);
        var ids=provider.GetDataProvider<ISpriteNameFileIdDataProvider>();
        if(ids==null)throw new InvalidOperationException("No se pudo asignar los identificadores de sprites.");
        ids.SetNameFileIdPairs(slices.Select(r=>new SpriteNameFileIdPair(r.name,r.spriteID)));
        provider.Apply();
        ((AssetImporter)provider.targetObject).SaveAndReimport();
        var all=AssetDatabase.LoadAllAssetsAtPath(sheet).OfType<Sprite>().ToDictionary(s=>s.name);
        var bg=Import("Assets/Art/Beach.png");bg.spriteImportMode=SpriteImportMode.Single;bg.spritePixelsPerUnit=100;bg.SaveAndReimport();
        art=AssetDatabase.LoadAssetAtPath<ArtCatalog>("Assets/Resources/ArtCatalog.asset");
        if(!art){art=ScriptableObject.CreateInstance<ArtCatalog>();AssetDatabase.CreateAsset(art,"Assets/Resources/ArtCatalog.asset");}
        art.idle=new[]{all["PLAYER_IDLE_0"],all["PLAYER_IDLE_1"]};art.walk=new[]{all["PLAYER_WALK_0"],all["PLAYER_WALK_1"]};
        art.pickup=new[]{all["PLAYER_PICKUP_0"],all["PLAYER_PICKUP_1"]};art.celebrate=new[]{all["PLAYER_CELEBRATE_0"],all["PLAYER_CELEBRATE_1"]};
        art.bottle=all["Bottle"];art.can=all["Can"];art.bag=all["Bag"];art.paper=all["Paper"];art.container=all["Container"];art.rock=all["Rock"];art.palm=all["Palm"];art.gull=all["Gull"];
        art.beach=AssetDatabase.LoadAssetAtPath<Sprite>("Assets/Art/Beach.png");
        art.music=AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Audio/Music/BeachLoop.wav");art.collectSound=AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Audio/Effects/Collect.wav");art.depositSound=AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Audio/Effects/Deposit.wav");art.victorySound=AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Audio/Effects/Victory.wav");EditorUtility.SetDirty(art);
    }
    static GameObject SpriteObject(string name,Sprite sprite,Vector2 pos,int sort){
        var g=new GameObject(name,typeof(SpriteRenderer));g.transform.position=pos;var sr=g.GetComponent<SpriteRenderer>();sr.sprite=sprite;sr.sortingOrder=sort;
        Sprite[] visuals={art.bottle,art.can,art.bag,art.paper,art.container,art.rock,art.palm,art.gull,art.beach};
        int index=Array.IndexOf(visuals,sprite);if(index>=0){var binding=g.AddComponent<ArtBinding>();binding.catalog=art;binding.kind=(ArtBinding.Kind)index;}
        return g;
    }
    static GameObject SavePrefab(GameObject g,string n){var p=PrefabUtility.SaveAsPrefabAsset(g,"Assets/Prefabs/"+n+".prefab");UnityEngine.Object.DestroyImmediate(g);return p;}
    static void CreatePrefabs(){
        var g=SpriteObject("Player",art.idle[0],Vector2.zero,100);
        var body=g.AddComponent<Rigidbody2D>();body.gravityScale=0;body.freezeRotation=true;body.interpolation=RigidbodyInterpolation2D.Interpolate;body.collisionDetectionMode=CollisionDetectionMode2D.Continuous;
        var c=g.AddComponent<CircleCollider2D>();c.radius=.31f;c.offset=new Vector2(0,.28f);
        var mat=new PhysicsMaterial2D("Sin fricción");mat.friction=0;mat.bounciness=0;
        string mp="Assets/Materials/Player.physicsMaterial2D";if(!AssetDatabase.LoadAssetAtPath<PhysicsMaterial2D>(mp))AssetDatabase.CreateAsset(mat,mp);c.sharedMaterial=AssetDatabase.LoadAssetAtPath<PhysicsMaterial2D>(mp);
        g.AddComponent<SpriteAnimator>().art=art;g.AddComponent<PlayerController>();playerPrefab=SavePrefab(g,"Player");
        g=SpriteObject("Trash",art.bottle,Vector2.zero,100);g.transform.localScale=Vector3.one*.72f;g.AddComponent<TrashItem>();trashPrefab=SavePrefab(g,"Trash");
        g=SpriteObject("TrashContainer",art.container,Vector2.zero,100);var bc=g.AddComponent<BoxCollider2D>();bc.size=new Vector2(.9f,.65f);bc.offset=new Vector2(0,.35f);binPrefab=SavePrefab(g,"TrashContainer");
        g=SpriteObject("Obstacle",art.rock,Vector2.zero,100);var circle=g.AddComponent<CircleCollider2D>();circle.radius=.64f;circle.offset=new Vector2(0,.33f);obstaclePrefab=SavePrefab(g,"Obstacle");
        var canvas=UiKit.Canvas("UI");SavePrefab(canvas.gameObject,"UI");
        var host=new GameObject("ButtonHost",typeof(RectTransform));var button=UiKit.Button(host.transform,"BOTÓN",Vector2.zero,new Vector2(340,56),null);SavePrefab(button.gameObject,"Button");UnityEngine.Object.DestroyImmediate(host);
        var evt=UnityEngine.Object.FindFirstObjectByType<UnityEngine.EventSystems.EventSystem>();if(evt)UnityEngine.Object.DestroyImmediate(evt.gameObject);
    }
    static void CreateClips(){
        var sets=new[]{art.idle,art.walk,art.pickup,art.celebrate};string[] names={"PLAYER_IDLE","PLAYER_WALK","PLAYER_PICKUP","PLAYER_CELEBRATE"};
        for(int j=0;j<4;j++){
            var clip=new AnimationClip{name=names[j],frameRate=7};
            var binding=new EditorCurveBinding{path="",type=typeof(SpriteRenderer),propertyName="m_Sprite"};
            var keys=new ObjectReferenceKeyframe[sets[j].Length+1];
            for(int k=0;k<keys.Length;k++)keys[k]=new ObjectReferenceKeyframe{time=k/7f,value=sets[j][k%sets[j].Length]};
            AnimationUtility.SetObjectReferenceCurve(clip,binding,keys);
            var settings=AnimationUtility.GetAnimationClipSettings(clip);settings.loopTime=true;AnimationUtility.SetAnimationClipSettings(clip,settings);
            string p="Assets/Animations/"+names[j]+".anim";if(!File.Exists(p))AssetDatabase.CreateAsset(clip,p);
        }
    }
    static GameObject Spawn(GameObject prefab,string name,Vector2 pos){var g=(GameObject)PrefabUtility.InstantiatePrefab(prefab);g.name=name;g.transform.position=pos;var sr=g.GetComponent<SpriteRenderer>();if(sr)sr.sortingOrder=100-Mathf.RoundToInt(pos.y*10);return g;}
    static void Wall(string name,Vector2 p,Vector2 size){var g=new GameObject(name);g.transform.position=p;g.AddComponent<BoxCollider2D>().size=size;}
    static Sprite WaterSprite(){
        string path="Assets/Environment/Beach/Water.png";
        if(!File.Exists(path)){
            var tex=new Texture2D(64,32,TextureFormat.RGBA32,false);
            for(int y=0;y<32;y++)for(int x=0;x<64;x++){
                float d=Mathf.Pow((x-31.5f)/31,2)+Mathf.Pow((y-15.5f)/15,2);
                tex.SetPixel(x,y,d>1?Color.clear:d>.78f?new Color(.65f,.96f,.96f):new Color(.1f,.63f,.77f));
            }tex.Apply();File.WriteAllBytes(path,tex.EncodeToPNG());UnityEngine.Object.DestroyImmediate(tex);AssetDatabase.ImportAsset(path);
        }
        var imp=Import(path);imp.spriteImportMode=SpriteImportMode.Single;imp.spritePixelsPerUnit=24;imp.SaveAndReimport();return AssetDatabase.LoadAssetAtPath<Sprite>(path);
    }
    static void CreateLevel(Layout layout,Camera camera){
        float w=layout.halfWidth,h=layout.halfHeight;
        var bg=SpriteObject("Beach Background",art.beach,Vector2.zero,-1000);
        bg.transform.localScale=new Vector3(w*2/art.beach.bounds.size.x,h*2/art.beach.bounds.size.y,1);
        var level=new GameObject("LevelController").AddComponent<LevelController>();level.levelNumber=layout.level;
        var player=Spawn(playerPrefab,"Player",new Vector2(0,-5));level.player=player.GetComponent<PlayerController>();level.player.level=level;
        var bin=Spawn(binPrefab,"TrashContainer",new Vector2(0,-3));level.container=bin.transform;
        var follow=camera.gameObject.AddComponent<CameraFollow>();follow.target=player.transform;follow.bounds=new Vector2(w,h);camera.transform.position=new Vector3(0,-3,-10);
        float upper=h*.4f,bottom=-h+1.5f,left=-w+2,right=w-2;
        Wall("Límite izquierdo",new Vector2(left-.5f,(bottom+upper)/2),new Vector2(1,upper-bottom+3));
        Wall("Límite derecho",new Vector2(right+.5f,(bottom+upper)/2),new Vector2(1,upper-bottom+3));
        Wall("Orilla · agua no transitable",new Vector2(0,upper+.5f),new Vector2(w*2,1));
        Wall("Límite inferior",new Vector2(0,bottom-.5f),new Vector2(w*2,1));
        var items=new List<TrashItem>();int index=0;
        foreach(var point in layout.trash){var g=Spawn(trashPrefab,"Trash_"+(++index),new Vector2(point.x,point.y));var item=g.GetComponent<TrashItem>();item.kind=point.kind;g.GetComponent<ArtBinding>().kind=(ArtBinding.Kind)point.kind;g.GetComponent<SpriteRenderer>().sprite=art.Trash(point.kind);items.Add(item);}level.trash=items.ToArray();
        foreach(var point in layout.rocks)Spawn(obstaclePrefab,"Rock",new Vector2(point.x,point.y));
        var water=WaterSprite();foreach(var point in layout.water){var g=SpriteObject("Tidal Pool",water,new Vector2(point.x,point.y),-800);g.AddComponent<BoxCollider2D>().size=new Vector2(2.2f,.9f);}
        for(int j=0;j<layout.level+2;j++){
            float x=-w+1+j*(w*2-2)/(layout.level+1);
            var palm=SpriteObject("Palm",art.palm,new Vector2(x,bottom-1),240);palm.transform.localScale=Vector3.one*1.8f;
        }
        for(int j=0;j<layout.level+1;j++){
            var g=SpriteObject("Seagull",art.gull,new Vector2(-w*.65f+j*6,upper+1.4f),-500);g.transform.localScale=Vector3.one*.55f;
            var motion=g.AddComponent<BeachMotion>();motion.horizontal=true;motion.amplitude=2;motion.speed=.45f+j*.1f;
        }
    }
    [MenuItem("ECODASH/2. Validar reglas y escenas")]
    public static void Validate(){
        for(int n=1;n<=3;n++){
            var r=new GameRules(n);if(r.Target!=n*10||r.Remaining!=(n+2)*60)throw new Exception("Configuración de nivel incorrecta");
            for(int cycle=0;cycle<n*2;cycle++){
                for(int j=0;j<5;j++)if(!r.Collect())throw new Exception("No recoge");
                if(r.Collect())throw new Exception("Sobrepasa capacidad");
                if(r.Won)throw new Exception("Victoria antes de depositar");
                if(r.Deposit()!=5)throw new Exception("Depósito incorrecto");
            }
            if(!r.Won||r.Bag!=0||r.Deposited!=n*10)throw new Exception("Victoria incorrecta");
            if(r.Score!=n*10*25+(n+2)*120)throw new Exception("Puntos incorrectos");
            if(r.Collect()||r.Deposit()!=0)throw new Exception("Permite jugar terminado");
            var fail=new GameRules(n);fail.Tick((n+2)*60);if(!fail.Lost||fail.Collect())throw new Exception("Derrota incorrecta");
        }
        foreach(var s in GameSession.Scenes)if(!File.Exists("Assets/Scenes/"+s+".unity"))throw new Exception("Falta escena "+s);
        if(EditorBuildSettings.scenes.Length!=10)throw new Exception("Faltan escenas en Build Settings");
        Debug.Log("ECODASH: reglas de 3 niveles y rutas de escenas correctas. Revisa el checklist de juego en LEEME.md para pruebas visuales y de física.");
    }
    [MenuItem("ECODASH/3. Crear ejecutable Windows")]
    public static void BuildWindows(){
        Validate();string folder=EditorUtility.OpenFolderPanel("Guardar ejecutable","","");if(string.IsNullOrEmpty(folder))return;
        var report=BuildPipeline.BuildPlayer(EditorBuildSettings.scenes.Select(s=>s.path).ToArray(),Path.Combine(folder,"ECODASH.exe"),BuildTarget.StandaloneWindows64,BuildOptions.None);
        Debug.Log("Compilación: "+report.summary.result);
    }
}
}

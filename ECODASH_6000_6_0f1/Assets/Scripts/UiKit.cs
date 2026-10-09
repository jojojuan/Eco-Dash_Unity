using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
#if ENABLE_INPUT_SYSTEM
using UnityEngine.InputSystem.UI;
#endif
namespace EcoDash {
public static class UiKit {
    public static readonly Color Navy=new Color(.035f,.12f,.20f,1),Mint=new Color(.36f,.94f,.77f,1),Gold=new Color(1,.80f,.35f,1);
    static Font font;
    public static Font Font{get{if(!font)font=Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");return font;}}
    public static RectTransform Rect(string name,Transform parent,Vector2 pos,Vector2 size){
        var g=new GameObject(name,typeof(RectTransform));var r=g.GetComponent<RectTransform>();r.SetParent(parent,false);r.anchorMin=r.anchorMax=r.pivot=new Vector2(.5f,.5f);r.anchoredPosition=pos;r.sizeDelta=size;return r;
    }
    public static Canvas Canvas(string name,int order=0){
        var g=new GameObject(name,typeof(Canvas),typeof(CanvasScaler),typeof(GraphicRaycaster));
        var c=g.GetComponent<Canvas>();c.renderMode=RenderMode.ScreenSpaceOverlay;c.sortingOrder=order;
        var s=g.GetComponent<CanvasScaler>();s.uiScaleMode=CanvasScaler.ScaleMode.ScaleWithScreenSize;s.referenceResolution=new Vector2(1280,720);s.matchWidthOrHeight=.5f;
        if(!Object.FindFirstObjectByType<EventSystem>()){
            var events=new GameObject("EventSystem",typeof(EventSystem));
#if ENABLE_INPUT_SYSTEM
            var module=events.AddComponent<InputSystemUIInputModule>();
            module.AssignDefaultActions();
#else
            events.AddComponent<StandaloneInputModule>();
#endif
        }
        return c;
    }
    public static Image Panel(Transform p,Vector2 pos,Vector2 size,Color color){var i=Rect("Panel",p,pos,size).gameObject.AddComponent<Image>();i.color=color;return i;}
    public static Text Label(Transform p,string text,Vector2 pos,Vector2 size,int px,Color color){
        var t=Rect("Text",p,pos,size).gameObject.AddComponent<Text>();t.font=Font;t.text=text;t.fontSize=px;t.color=color;t.alignment=TextAnchor.MiddleCenter;t.raycastTarget=false;t.horizontalOverflow=HorizontalWrapMode.Wrap;t.verticalOverflow=VerticalWrapMode.Overflow;return t;
    }
    public static Image Picture(Transform p,Sprite s,Vector2 pos,Vector2 size){var i=Panel(p,pos,size,Color.white);i.sprite=s;i.preserveAspect=true;i.raycastTarget=false;return i;}
    public static Button Button(Transform p,string title,Vector2 pos,Vector2 size,UnityAction action,bool active=true){
        var bg=Panel(p,pos,size,Mint);bg.name=title;var b=bg.gameObject.AddComponent<Button>();b.targetGraphic=bg;
        var colors=b.colors;colors.normalColor=Color.white;colors.highlightedColor=new Color(1,1,.75f);colors.pressedColor=new Color(.6f,.85f,.8f);colors.disabledColor=new Color(.35f,.43f,.46f);b.colors=colors;
        b.interactable=active;if(action!=null)b.onClick.AddListener(action);
        Label(bg.transform,title,Vector2.zero,size-new Vector2(16,4),22,Navy);return b;
    }
    public static void Lock(Transform p,Vector2 pos){
        Panel(p,pos+new Vector2(0,8),new Vector2(22,23),Gold);
        Panel(p,pos+new Vector2(0,8),new Vector2(12,13),Navy);
        Panel(p,pos-new Vector2(0,8),new Vector2(32,24),Gold);
        Panel(p,pos-new Vector2(0,8),new Vector2(4,9),Navy);
    }
}
}

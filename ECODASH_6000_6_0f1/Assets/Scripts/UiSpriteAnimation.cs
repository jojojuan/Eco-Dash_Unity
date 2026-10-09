using UnityEngine;
using UnityEngine.UI;
namespace EcoDash {
public class UiSpriteAnimation:MonoBehaviour {
    public Sprite[] frames;
    void Update(){if(frames!=null&&frames.Length>0)GetComponent<Image>().sprite=frames[(int)(Time.unscaledTime*3)%frames.Length];}
}
}

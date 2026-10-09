using UnityEngine;
namespace EcoDash {
[RequireComponent(typeof(SpriteRenderer))]
public class SpriteAnimator : MonoBehaviour {
    public ArtCatalog art;
    public bool walking,celebrating;
    public float fps=7;
    float pickupUntil;
    SpriteRenderer sr;
    void Awake(){sr=GetComponent<SpriteRenderer>();}
    public void Pickup(){pickupUntil=Time.time+.38f;}
    void LateUpdate(){
        if(!art)return;if(!sr)sr=GetComponent<SpriteRenderer>();
        var frames=celebrating?art.celebrate:Time.time<pickupUntil?art.pickup:walking?art.walk:art.idle;
        if(frames!=null&&frames.Length>0)sr.sprite=frames[(int)(Time.time*fps)%frames.Length];
        sr.sortingOrder=100-Mathf.RoundToInt(transform.position.y*10);
    }
}
}

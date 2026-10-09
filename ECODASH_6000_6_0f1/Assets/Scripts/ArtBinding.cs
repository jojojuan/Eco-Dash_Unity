using UnityEngine;
namespace EcoDash {
// Catalog changes are reflected when a scene starts, without changing scripts.
[RequireComponent(typeof(SpriteRenderer))]
public class ArtBinding:MonoBehaviour {
    public enum Kind {Bottle,Can,Bag,Paper,Container,Rock,Palm,Gull,Beach}
    public ArtCatalog catalog;
    public Kind kind;
    void Awake(){
        if(!catalog)return;Sprite s=null;
        switch(kind){
            case Kind.Bottle:s=catalog.bottle;break;case Kind.Can:s=catalog.can;break;
            case Kind.Bag:s=catalog.bag;break;case Kind.Paper:s=catalog.paper;break;
            case Kind.Container:s=catalog.container;break;case Kind.Rock:s=catalog.rock;break;
            case Kind.Palm:s=catalog.palm;break;case Kind.Gull:s=catalog.gull;break;case Kind.Beach:s=catalog.beach;break;
        }
        if(s)GetComponent<SpriteRenderer>().sprite=s;
    }
}
}

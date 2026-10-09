using UnityEngine;
namespace EcoDash {
public class TrashItem : MonoBehaviour {
    [Range(0,3)]public int kind;
    public bool Collected {get;private set;}
    public void Collect(){Collected=true;gameObject.SetActive(false);}
}
}

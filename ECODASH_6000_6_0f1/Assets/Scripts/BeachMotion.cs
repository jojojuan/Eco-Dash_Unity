using UnityEngine;
namespace EcoDash {
public class BeachMotion : MonoBehaviour {
    public float amplitude=.15f,speed=1;
    public bool horizontal;
    Vector3 origin;
    void Start(){origin=transform.position;}
    void Update(){transform.position=origin+(horizontal?Vector3.right:Vector3.up)*Mathf.Sin(Time.time*speed+origin.x)*amplitude;}
}
}

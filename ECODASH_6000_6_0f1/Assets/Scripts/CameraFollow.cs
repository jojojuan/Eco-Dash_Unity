using UnityEngine;
namespace EcoDash {
public class CameraFollow : MonoBehaviour {
    public Transform target;
    public Vector2 bounds=new Vector2(18,10);
    void LateUpdate(){
        if(!target)return;var cam=GetComponent<Camera>();float h=cam.orthographicSize,w=h*cam.aspect;
        Vector3 p=target.position;p.z=-10;
        p.x=Mathf.Clamp(p.x,-Mathf.Max(0,bounds.x-w),Mathf.Max(0,bounds.x-w));
        p.y=Mathf.Clamp(p.y,-Mathf.Max(0,bounds.y-h),Mathf.Max(0,bounds.y-h));
        transform.position=Vector3.Lerp(transform.position,p,1-Mathf.Exp(-8*Time.deltaTime));
    }
}
}

using UnityEngine;
namespace EcoDash {
[RequireComponent(typeof(Rigidbody2D),typeof(SpriteAnimator))]
public class PlayerController : MonoBehaviour {
    public float speed=5;
    public LevelController level;
    Rigidbody2D body;SpriteAnimator anim;SpriteRenderer sr;Vector2 direction;
    void Awake(){body=GetComponent<Rigidbody2D>();anim=GetComponent<SpriteAnimator>();sr=GetComponent<SpriteRenderer>();}
    void Update(){
        direction=Vector2.zero;
        if(!level||!level.Running){anim.walking=false;return;}
        if(GameInput.Held(KeyCode.A)||GameInput.Held(KeyCode.LeftArrow))direction.x--;
        if(GameInput.Held(KeyCode.D)||GameInput.Held(KeyCode.RightArrow))direction.x++;
        if(GameInput.Held(KeyCode.S)||GameInput.Held(KeyCode.DownArrow))direction.y--;
        if(GameInput.Held(KeyCode.W)||GameInput.Held(KeyCode.UpArrow))direction.y++;
        direction=direction.normalized;anim.walking=direction.sqrMagnitude>0;
        if(direction.x!=0)sr.flipX=direction.x<0;
        if(GameInput.Pressed(KeyCode.E))level.Interact();
    }
    void FixedUpdate(){
        if(!level||!level.Running){body.linearVelocity=Vector2.zero;return;}
        body.linearVelocity=direction*speed;
    }
}
}

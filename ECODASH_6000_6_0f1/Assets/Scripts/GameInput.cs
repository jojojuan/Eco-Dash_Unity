using UnityEngine;
#if ENABLE_INPUT_SYSTEM
using UnityEngine.InputSystem;
#endif
namespace EcoDash {
// Works with either input backend. Prefer the new Input System when both are enabled.
public static class GameInput {
    public static bool Held(KeyCode key) {
#if ENABLE_INPUT_SYSTEM
        var keyboard=Keyboard.current;
        if(keyboard==null)return false;
        return keyboard[ToKey(key)].isPressed;
#else
        return Input.GetKey(key);
#endif
    }
    public static bool Pressed(KeyCode key) {
#if ENABLE_INPUT_SYSTEM
        var keyboard=Keyboard.current;
        if(keyboard==null)return false;
        return keyboard[ToKey(key)].wasPressedThisFrame;
#else
        return Input.GetKeyDown(key);
#endif
    }
#if ENABLE_INPUT_SYSTEM
    static Key ToKey(KeyCode key) {
        switch(key){
            case KeyCode.W:return Key.W;case KeyCode.A:return Key.A;
            case KeyCode.S:return Key.S;case KeyCode.D:return Key.D;
            case KeyCode.E:return Key.E;case KeyCode.Escape:return Key.Escape;
            case KeyCode.UpArrow:return Key.UpArrow;case KeyCode.DownArrow:return Key.DownArrow;
            case KeyCode.LeftArrow:return Key.LeftArrow;case KeyCode.RightArrow:return Key.RightArrow;
            default:throw new System.ArgumentOutOfRangeException(nameof(key),key,"Unsupported ECODASH key");
        }
    }
#endif
}
}

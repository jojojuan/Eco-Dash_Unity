# Adaptación para Unity 6.6 — 6000.6.0f1

- ProjectVersion.txt apunta a la versión exacta de la captura.
- Unity UI pasa de 1.0.0 a 2.0.0. Se declaran 2D Sprite 1.0.0, Input System 1.20.1 e Image Conversion.
- La importación usa SpriteDataProviderFactories e ISpriteEditorDataProvider; conserva los ID existentes por nombre y registra SpriteNameFileIdPair.
- Rigidbody2D usa linearVelocity.
- Búsquedas mediante FindFirstObjectByType y FindObjectsByType, sin ordenar cuando no hace falta.
- GameInput permite teclado con Input System o Input Manager. UiKit selecciona el módulo de eventos correspondiente para los botones.
- Se evita iniciar dos preparaciones simultáneas y se restablece la instancia de sesión al entrar en Play sin recarga de dominio.
- Se conservan las reglas, arte, audio y coordenadas de los tres niveles.

Documentación oficial consultada:
https://docs.unity.com/en-us/engine/6000.5/script-reference/unityeditor/textureimporter/spritesheet
https://docs.unity3d.com/cn/6000.0/Manual/sprite/sprite-editor/sprite-editor-data-provider-api.html
https://docs.unity3d.com/6000.0/Documentation/Manual/com.unity.ugui.html
https://docs.unity3d.com/Packages/com.unity.inputsystem@1.20/api/UnityEngine.InputSystem.UI.InputSystemUIInputModule.html

Verificación ejecutada: datos y accesibilidad de los mapas, integridad de recortes y audio, comprobaciones estáticas del código y configuración. No se ejecutó Unity ni su compilador. Las referencias consultadas documentan la familia Unity 6; la compatibilidad exacta con 6000.6.0f1 queda pendiente de la apertura en ese editor.

# Corrección de errores CS0619 del paquete Input System

Se actualizó `com.unity.inputsystem` de 1.17.0 a **1.20.1**, publicada para Unity 6000.6. Esto aborda los errores de GetInstanceID y ShowWindowWithContent mostrados en la captura.

Si ya tienes el proyecto abierto, basta con cambiar esa versión en `Packages/manifest.json`, guardar y dejar que Unity actualice el paquete. No edites los archivos dentro de Library/PackageCache. Si prefieres este ZIP, extráelo en una carpeta nueva y ábrelo con 6000.6.0f1.

Fuente: https://docs.unity3d.com/6000.6/Documentation/Manual/com.unity.inputsystem.html

La corrección está basada en la consola y en la versión oficial del paquete; todavía no se ejecutó el editor en este entorno.

---

# ABRIR ESTA VERSIÓN

Esta es la adaptación de ECODASH para **Unity 6.6 (6000.6.0f1)**, la versión de tu captura.

Extrae en una **carpeta nueva**. En Unity Hub añade `ECODASH_6000_6_0f1` y selecciona **6000.6.0f1**. No necesitas crear un proyecto vacío ni importar la carpeta encima del proyecto anterior.

Espera la descarga de paquetes y la compilación. Si Unity pregunta por activar el nuevo Input System, acepta y permite reiniciar el editor. El proyecto admite el sistema antiguo, el nuevo y Both; los botones usan el módulo correspondiente.

El instalador prepara las escenas y abre el menú automáticamente. Si no ocurre, usa **ECODASH → 1. Preparar proyecto (primera vez)**. Después pulsa Play.

**Estado de verificación:** actualizado según las APIs documentadas de Unity 6 y revisado de forma estática. No se ha ejecutado en Unity 6.6 en este entorno; no se garantiza una compilación sin errores hasta abrirlo en el editor.

---

# ECODASH — Chanchito: limpiemos la playa

Proyecto fuente de Unity 2D, preparado para Unity **6.6** (versión declarada: **6000.6.0f1**). No es un ejecutable de Windows. No necesita comprar el paquete de Crusenho. Los sprites PNG y el fondo vienen incluidos.

## Abrir y jugar

1. Extrae **todo** el ZIP en una carpeta, por ejemplo `C:\Juegos\ECODASH`.
2. En Unity Hub, elige **Add / Añadir proyecto desde disco**. Selecciona la carpeta que contiene `Assets`, `Packages` y `ProjectSettings`, no solamente `Assets`.
3. Ábrela con Unity 6.6 (6000.6.0f1). La primera apertura puede necesitar conexión para resolver el paquetes oficiales Unity UI, 2D Sprite e Input System.
4. Espera a que termine la importación y compilación. El instalador incluido crea automáticamente las **10 escenas**, los prefabs, el catálogo de sprites y los clips de animación, y abre `00_MainMenu`.
5. Si la preparación automática no se ejecuta, utiliza el menú superior **ECODASH → 1. Preparar proyecto (primera vez)**.
6. Pulsa **Play**, selecciona la pestaña **Game**, preferentemente en **16:9**, y pulsa **JUGAR**.

**No hay que arrastrar manualmente los scripts ni dibujar el escenario.** Las escenas y prefabs nativos se generan en la primera apertura, a partir de los archivos incluidos. Antes de esa apertura las carpetas correspondientes pueden estar vacías.

## Controles y reglas

- WASD o flechas: desplazarse por la playa en dos ejes; no es un plataformas con salto.
- E: recoger el residuo más cercano o depositar junto al contenedor.
- ESC / PAUSA: pausar. CONTINUAR reanuda el juego.
- Bolsa: capacidad de **5**, siguiendo el texto de requisitos, no el 10 de la imagen conceptual.
- BASURA muestra lo **depositado**; BOLSA muestra lo transportado. Un residuo no se cuenta dos veces.
- Cada residuo depositado suma 25 puntos. Ganar agrega 2 puntos por segundo completo restante.
- El nivel termina cuando se deposita el objetivo completo. No basta con guardarlo en la bolsa.
- Los niveles 2 y 3 se desbloquean al ganar el anterior. PlayerPrefs conserva niveles completados, desbloqueo y récord individual.
- JUGAR y JUGAR DE NUEVO inician el nivel 1; no borran los récords.

| Nivel | Objetivo | Tiempo | Obstáculos |
|---|---:|---:|---|
| Playa limpia | 10 | 3:00 | 4 rocas |
| Playa contaminada | 20 | 4:00 | 9 rocas y 2 charcos |
| Gran limpieza | 30 | 5:00 | 16 rocas y 3 charcos |

Cada nivel tiene mayor extensión. Los charcos y la orilla bloquean el paso; las gaviotas son ambientales. No hay daño, vidas ni sistema de salto, pues no forman parte de las reglas del texto. El indicador CONTENEDOR señala la dirección para regresar. La cámara acompaña al jugador.

## Pantallas

Se usan los nombres de la lista final de requisitos. `01_LevelSelect` corresponde a SELECCION_NIVELES y `03_Level01` a LEVEL_01.

| Escena generada | Función |
|---|---|
| 00_MainMenu | Presentación, Jugar, Niveles, Cómo jugar, Créditos, Salir |
| 01_LevelSelect | Tres niveles, candados y récords |
| 02_HowToPlay | Instrucciones |
| 03_Level01 | Primer nivel |
| 04_Level02 | Segundo nivel |
| 05_Level03 | Tercer nivel |
| 06_Victory | Resultados, siguiente, repetir, menú |
| 07_GameOver | Derrota, reintentar y menú |
| 08_Final | Celebración y mensaje ambiental |
| 09_Credits | Noel |

La carga, introducción de nivel y pausa son paneles; no necesitan escenas adicionales. En el tercer nivel, VER FINAL abre el cierre después de mostrar resultados. SALIR cierra el ejecutable; dentro del editor detiene Play.

## Cambiar sprites sin modificar código

Después de la primera preparación, selecciona **Assets/Resources/ArtCatalog.asset** en Project y usa el Inspector:

- Idle, Walk, Pickup y Celebrate: arreglos de fotogramas del chanchito.
- Bottle, Can, Bag, Paper: residuos.
- Container, Rock, Palm, Gull, Beach: escenario.
- Music y efectos: AudioClips reemplazables.

Importa tus nuevos PNG como **Sprite (2D and UI)**, Filter Mode **Point**, Compression **None**. Para el personaje y objetos usa Pivot **Bottom Center** y ajusta Pixels Per Unit para mantener su tamaño. Las celdas originales están recortadas según su contorno real; la hoja generada no es una cuadrícula perfectamente regular. No uses Slice por celda fija sobre este atlas.

Los objetos de escena usan `ArtBinding` para leer el catálogo al iniciar. El chanchito usa `SpriteAnimator`; no necesita un Animator Controller. También se crean cuatro archivos `.anim` en `Assets/Animations` para que puedas inspeccionarlos o usarlos en tu propio Animator. No actives ambos sistemas simultáneamente sobre el mismo SpriteRenderer.

Carpetas sugeridas ya creadas por el instalador: Characters/Player, Environment/Beach, Trash/Bottle, Trash/Can, Trash/Bag, Trash/Paper, UI/Buttons, UI/Icons. El atlas original se conserva en Assets/Art.

Los prefabs Player, Trash, TrashContainer, Obstacle, UI y Button quedan en Assets/Prefabs. Los niveles contienen instancias editables. La interfaz se crea en ejecución mediante UiKit; sus paneles no aparecen en la escena fuera de Play. Para cambios permanentes de texto o distribución, edita ScreenController, LevelController o UiKit. El reemplazo de imágenes no requiere esos cambios.

No elimines `Assets/Resources/ECODASH_READY.txt`: evita que la preparación sobrescriba escenas que hayas editado. Para comenzar desde cero, extrae otra copia del ZIP.

## Validación y limitaciones de la entrega

Se ejecutó una revisión de los datos de los tres mapas: los **60 residuos y los contenedores son alcanzables** con el tamaño del jugador y los obstáculos definidos. Se verificaron los 16 recortes del atlas, los cuatro WAV y el balance de delimitadores de C#.

**No hay Unity instalado en el entorno de preparación. No se ejecutó el compilador de Unity, Play Mode ni una compilación Windows. Por ello la entrega no se presenta como un juego probado dentro del motor.** Consulta `VALIDACION.txt`.

En Unity, ejecuta **ECODASH → 2. Validar reglas y escenas**. Este comando comprueba capacidad, objetivos, puntuación, victoria después de depositar, derrota por tiempo y existencia de las escenas. No cambia tu progreso.

Antes de exponer, completa esta prueba manual:

- [ ] Console sin errores rojos después de importar.
- [ ] Menú: abrir Niveles, Cómo jugar y Créditos; volver desde cada uno.
- [ ] Primera partida: niveles 2 y 3 bloqueados.
- [ ] Moverse en los cuatro sentidos; animación y colisiones con rocas/orilla/charcos.
- [ ] Recoger cinco objetos; el sexto queda en el suelo.
- [ ] Depositar cinco: bolsa 0/5, basura 5/10 y 125 puntos.
- [ ] Pausar unos segundos: reloj y jugador inmóviles; reanudar.
- [ ] Depositar diez: victoria y desbloqueo del nivel 2.
- [ ] Completar los niveles 2 y 3; abrir la pantalla final.
- [ ] Repetir nivel y regresar al menú desde pausa, victoria y derrota.
- [ ] Para probar derrota rápidamente en una copia, cambiar temporalmente Remaining a 5 en el constructor de GameRules; después restaurar `(Level+2)*60`.
- [ ] Cerrar y abrir: comprobar desbloqueos y récords conservados.
- [ ] Crear ejecutable, volver a probar controles y comprobar SALIR.

## Crear el ejecutable para la exposición

Instala el soporte **Windows Build Support** de la versión de Unity usada. Luego **ECODASH → 3. Crear ejecutable Windows** y elige una carpeta vacía. También puedes usar File → Build Profiles: el instalador ya registra las diez escenas.

Para transportar el juego copia **toda la carpeta de compilación**, incluyendo ECODASH.exe, ECODASH_Data y las bibliotecas que Unity genere. Copiar solo el .exe no basta.

## Organización del código

GameRules: inventario, puntos, tiempo y victoria/derrota, sin depender de Unity.
ProgressStore: PlayerPrefs con prefijo exclusivo ECODASH.v1.
GameSession: cambios de escena, resultado y audio persistente.
PlayerController: entrada y Rigidbody2D.
LevelController: interacciones, HUD, pausa y fin del nivel.
ScreenController / UiKit: pantallas y botones.
SpriteAnimator / UiSpriteAnimation / ArtBinding: sprites reemplazables.
CameraFollow / BeachMotion: cámara y ambiente.
EcoDashBuilder: creación inicial del proyecto y comandos de validación/compilación.

Tools/prepare_data.py y Tools/check_project.py son utilidades de preparación y verificación offline. **No necesitas Python para abrir ni jugar en Unity.**

## Referencias y arte

- Guía facilitada: https://youtu.be/mtA2iIGNCkA . No se pudo reproducir ni verificar íntegramente su contenido durante la preparación; el código incluido se escribió para estos requisitos.
- Referencia de estilo: https://crusenho.itch.io/beriesadventureseaside . El sitio indica que su paquete no incluye el proyecto Unity. No se redistribuyen sus sprites.
- API oficial Unity: https://docs.unity3d.com/2022.3/Documentation/ScriptReference/Sprite.Create.html
- Sprites y fondo creados con la herramienta integrada de generación de imágenes; conservados dentro del proyecto. Hay dos fotogramas por estado y volteo horizontal para mirar a izquierda/derecha. No incluye animaciones direccionales de espalda.
- Música y efectos originales sintetizados por el script incluido; no se usó audio de terceros.
- La pantalla de créditos muestra únicamente Noel.

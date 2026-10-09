using UnityEngine;
namespace EcoDash {
[CreateAssetMenu(menuName="ECODASH/Arte reemplazable")]
public class ArtCatalog : ScriptableObject {
    public Sprite[] idle, walk, pickup, celebrate;
    public Sprite bottle, can, bag, paper, container, rock, palm, gull, beach;
    public AudioClip music, collectSound, depositSound, victorySound;
    public Sprite Trash(int i) { return new[]{bottle,can,bag,paper}[i%4]; }
}
}

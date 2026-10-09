using UnityEngine;
namespace EcoDash {
public static class ProgressStore {
    const string Prefix="ECODASH.v1.";
    public static int Unlocked { get{return Mathf.Clamp(PlayerPrefs.GetInt(Prefix+"Unlocked",1),1,3);} }
    public static int Best(int n){return PlayerPrefs.GetInt(Prefix+"Best"+n,0);}
    public static bool Completed(int n){return PlayerPrefs.GetInt(Prefix+"Done"+n,0)==1;}
    public static void SaveWin(GameRules r){
        if(!r.Won)return;
        PlayerPrefs.SetInt(Prefix+"Unlocked",Mathf.Max(Unlocked,Mathf.Min(3,r.Level+1)));
        PlayerPrefs.SetInt(Prefix+"Best"+r.Level,Mathf.Max(Best(r.Level),r.Score));
        PlayerPrefs.SetInt(Prefix+"Done"+r.Level,1); PlayerPrefs.Save();
    }
}
}

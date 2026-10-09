using System;
namespace EcoDash {
// Pure game rules: independent from sprites, scenes and Unity input.
public sealed class GameRules {
    public const int Capacity=5;
    public int Level {get;private set;}
    public int Target {get;private set;}
    public int Bag {get;private set;}
    public int Deposited {get;private set;}
    public int Score {get;private set;}
    public float Remaining {get;private set;}
    public bool Won {get;private set;}
    public bool Lost {get;private set;}
    public bool Finished {get{return Won||Lost;}}
    public GameRules(int level) { Level=Math.Max(1,Math.Min(3,level)); Target=Level*10; Remaining=(Level+2)*60; }
    public bool Collect() { if(Finished||Bag>=Capacity||Deposited+Bag>=Target)return false; Bag++;return true; }
    public int Deposit() {
        if(Finished||Bag==0)return 0;
        int n=Bag; Deposited+=n; Bag=0; Score+=n*25;
        if(Deposited>=Target){Won=true;Score+=(int)Remaining*2;}
        return n;
    }
    public void Tick(float seconds) { if(Finished)return;Remaining=Math.Max(0,Remaining-Math.Max(0,seconds));if(Remaining<=0)Lost=true; }
}
}

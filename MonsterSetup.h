#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Monster
{
  public:
    void setup();
    void saveStats();
    void loadStats();
    void makeDefault();
    void getInititive();

    //base
    string Name;
    int Challenge;
    
    int HP;
    int AC;

    //Base Stats
    int Strength;
    int Dexterity;
    int Constitution;
    int Intelligence;
    int Wisdom;
    int Charisma;

    //Base Stat Modifiers
    int STRmod;
    int DEXmod;
    int CONmod;
    int INTmod;
    int WISmod;
    int CHAmod;

    //other
    int walkSpeed;
    int flySpeed;
    int burrowSpeed;
    int swimSpeed;
    int size;
    string extraInfo;

    string id;
    string id2;

    int inititive;

    bool inUse;

  private:
};
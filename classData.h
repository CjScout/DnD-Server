#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Player
{
  public:

    void changeData();
    void setup();
    void saveStats();
    void loadStats();

    bool inUse;
    string usersName;

    string name;
    int Level;

    int HP;
    int AC;
    
    // Base Stats
    int Strength;
    int Dexterity;
    int Constitution;
    int Inteligence;
    int Wisdom;
    int Charisma;

    //Base Stat Modifiers
    int strengthMod;
    int dexterityMod;
    int constitutionMod;
    int inteligenceMod;
    int wisdomMod;
    int charismaMod;

    // Saving Throws
    int saveStrength;
    int saveDexterity;
    int saveConstitution;
    int saveInteligence;
    int saveWisdom;
    int saveCharisma;

    //proficiencies
    int proficiencyBonus;
    bool proficientAcrobatics;
    bool proficientAnimal;
    bool proficientArcana;
    bool proficientAthletics;
    bool proficientDeception;
    bool proficientHistory;
    bool proficientInsight;
    bool proficientIntimidation;
    bool proficientInvestigation;
    bool proficientMedicine;
    bool proficientNature;
    bool proficientPerception;
    bool proficientPerformance;
    bool proficientPersuasion;
    bool proficientReligion;
    bool proficientSleight;
    bool proficientStealth;
    bool proficientSurvival;

    // Other
    int walkingSpeed;

    string id;
    
  private:
};

class friendCreature
{
  public:

    void changeData();
    void setup();
    void saveStats();
    void loadStats();

    bool inUse;

    string name;
    int Level;

    int HP;
    int AC;
    
    // Base Stats
    int Strength;
    int Dexterity;
    int Constitution;
    int Inteligence;
    int Wisdom;
    int Charisma;

    //Base Stat Modifiers
    int strengthMod;
    int dexterityMod;
    int constitutionMod;
    int inteligenceMod;
    int wisdomMod;
    int charismaMod;

    // Saving Throws
    int saveStrength;
    int saveDexterity;
    int saveConstitution;
    int saveInteligence;
    int saveWisdom;
    int saveCharisma;

    // Other
    int walkingSpeed;

    string id;
    
  private:
};
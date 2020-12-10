#include "classData.h"
#include <fstream>

fstream file;

string newValue;
string stat;
string path;

void Player::setup()
{
  // Name
  cout << "Enter Chacter Name: ";
  cin >> name;
  cout << "Enter User's Name: ";
  cin >> usersName;

  // Level
  cout << "Enter Character level: ";
  cin >> Level;

  // HP
  cout << "Enter HP: ";
  cin >> HP;

  // AC
  cout << "Enter AC: ";
  cin >> AC;

  // Base Stats
  cout << "Enter Base Stats in this order, Stength Dexterity Constitution Inteligence Wisdom Charisma: " << endl;
  cin >> Strength;
  cin >> Dexterity;
  cin >> Constitution;
  cin >> Inteligence;
  cin >> Wisdom;
  cin >> Charisma;

  // Saving Throw
  cout << "Enter saving throws in the order you entered the Base Stats: " << endl;
  cin >> saveStrength;
  cin >> saveDexterity;
  cin >> saveConstitution;
  cin >> saveInteligence;
  cin >> saveWisdom;
  cin >> saveCharisma;

  // proficiency Bonus
  cout << "Enter Proficiency Bonus: " << endl;
  cin >> proficiencyBonus;

  // Proficiencies
  cout << "Enter Proficiencies in order, where 1 is true and 0 is false: " << endl;
  cin >> proficientAcrobatics; 
  cin >> proficientAnimal;
  cin >> proficientArcana;
  cin >> proficientAthletics;
  cin >> proficientDeception;
  cin >> proficientHistory;
  cin >> proficientInsight;
  cin >> proficientIntimidation;
  cin >> proficientInvestigation;
  cin >> proficientMedicine;
  cin >> proficientNature;
  cin >> proficientPerception;
  cin >> proficientPerformance;
  cin >> proficientPersuasion;
  cin >> proficientReligion;
  cin >> proficientSleight;
  cin >> proficientStealth;
  cin >> proficientSurvival;

  // Other
  cout << "Enter walking speed" << endl;
  cin >> walkingSpeed;
}

void Player::changeData()
{
  cout << "Enter which stat you would like to edit: ";
  cin >> stat;
  cout << endl << "Enter the new value: ";
  cin >> newValue;

  if (stat == "Name")
  {
    name = newValue;
  }
  else if(stat == "User's Name")
  {
    usersName = newValue;
  }
  else if (stat == "Level")
  {
    Level = stoi(newValue);
  }


  else if (stat == "HP")
  {
    HP = stoi(newValue);
  }
  else if (stat == "AC")
  {
    AC = stoi(newValue);
  }


  else if (stat == "Strength")
  {
    Strength = stoi(newValue);
  }
  else if (stat == "Dexerity")
  {
    Dexterity = stoi(newValue);
  }
  else if (stat == "Constitution")
  {
    Constitution = stoi(newValue);
  }
  else if (stat == "Inteligence")
  {
    Inteligence = stoi(newValue);
  }
  else if (stat == "Wisdom")
  {
    Wisdom = stoi(newValue);
  }
  else if (stat == "Charisma")
  {
    Charisma = stoi(newValue);
  }


  else if (stat == "saveStrength")
  {
    saveStrength = stoi(newValue);
  }
  else if (stat == "saveDexerity")
  {
    saveDexterity = stoi(newValue);
  }
  else if (stat == "saveConstitution")
  {
    saveConstitution = stoi(newValue);
  }
  else if (stat == "saveInteligence")
  {
    saveInteligence = stoi(newValue);
  }
  else if (stat == "saveWisdom")
  {
    saveWisdom = stoi(newValue);
  }
  else if (stat == "saveCharisma")
  {
    saveCharisma = stoi(newValue);
  }
  else
  {
    cout << "Invalid stat, please try again." << endl;
    return;
  }

  cout << stat << " sucessfully changed." << endl;
}


void Player::saveStats()
{
    path = "PlayerData/" + id + ".txt";
    file.open(path);
    file << inUse << endl;
    file << name << endl;
    file << usersName << endl;
    file << Level << endl;
    file << HP << endl;
    file << AC << endl;
    file << Strength << endl;
    file << Dexterity << endl;
    file << Constitution << endl;
    file << Inteligence << endl;
    file << Wisdom << endl;
    file << Charisma << endl;
    file << saveStrength << endl;
    file << saveDexterity << endl;
    file << saveConstitution << endl;
    file << saveInteligence << endl;
    file << saveWisdom << endl;
    file << saveCharisma << endl;
    file << proficiencyBonus << endl;
    file << proficientAcrobatics << endl;
    file << proficientAnimal << endl;
    file << proficientArcana << endl;
    file << proficientAthletics << endl;
    file << proficientDeception << endl;
    file << proficientHistory << endl;
    file << proficientInsight << endl;
    file << proficientIntimidation << endl;
    file << proficientInvestigation << endl;
    file << proficientMedicine << endl;
    file << proficientNature << endl;
    file << proficientPerception << endl;
    file << proficientPerformance << endl;
    file << proficientPersuasion << endl;
    file << proficientReligion << endl;
    file << proficientSleight << endl;
    file << proficientStealth << endl;
    file << proficientSurvival << endl;
    file << walkingSpeed << endl;
    file.close();
}
void Player::loadStats()
{
    path = "PlayerData/" + id + ".txt";
    file.open(path);
    file >> inUse;
    file >> name;
    file >> usersName;
    file >> Level;
    file >> HP;
    file >> AC;
    file >> Strength;
    file >> Dexterity;
    file >> Constitution;
    file >> Inteligence;
    file >> Wisdom;
    file >> Charisma;
    file >> saveStrength;
    file >> saveDexterity;
    file >> saveConstitution;
    file >> saveInteligence;
    file >> saveWisdom;
    file >> saveCharisma;
    file >> proficiencyBonus;
    file >> proficientAcrobatics;
    file >> proficientAnimal;
    file >> proficientArcana;
    file >> proficientAthletics;
    file >> proficientDeception;
    file >> proficientHistory;
    file >> proficientInsight;
    file >> proficientIntimidation;
    file >> proficientInvestigation;
    file >> proficientMedicine;
    file >> proficientNature;
    file >> proficientPerception;
    file >> proficientPerformance;
    file >> proficientPersuasion;
    file >> proficientReligion;
    file >> proficientSleight;
    file >> proficientStealth;
    file >> proficientSurvival;
    file >> walkingSpeed;
    file.close();
}
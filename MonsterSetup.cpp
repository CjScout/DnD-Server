#include "MonsterSetup.h"
#include <fstream>

fstream file1;
fstream file2;
fstream file3;

string newValue1;
string stat1;
string path1;
string path2;
string path3;

void Monster::setup() 
{
  //name
  cout << "Enter Monster Name: ";
  cin >> Name;

  //challenge
  cout << "Enter Monster Challenge: ";
  cin >> Challenge;

  //HP + AP
  cout << "Enter Monster HP: ";
  cin >> HP;
  cout << "Enter Monster AC: ";
  cin >> AC;

  //Base Stats
  cout << "Please enter monster stats in the order of Strength, Dexterity, Constitution, Intelligence, Wisdom, and Charisma: " << endl;
  cin >> Strength;
  cin >> Dexterity;
  cin >> Constitution;
  cin >> Intelligence;
  cin >> Wisdom;
  cin >> Charisma;

  //Other
  cout << "Please enter Monster's Walking Speed: ";
  cin >> walkSpeed;
  cout << "Please enter Monster's Flying Speed: ";
  cin >> flySpeed;
  cout << "Please enter Monster's Burrowing Speed: ";
  cin >> burrowSpeed;
  cout << "Please enter Monster's Swiming Speed: ";
  cin >> swimSpeed;
  cout << "Please enter Monster's Size: ";
  cin >> size;

  //Extra
  cout << "Please enter any extra information: ";
  cin >> extraInfo;
}

void Monster::saveStats()
{
  path1 = "MonsterData/RegularData/" + id + ".txt";
  file1.open(path1);
  file1 << Name << endl;
  file1 << Challenge << endl;
  file1 << HP << endl;
  file1 << AC << endl;
  file1 << Strength << endl;
  file1 << Dexterity << endl;
  file1 << Constitution << endl;
  file1 << Intelligence << endl;
  file1 << Wisdom << endl;
  file1 << Charisma << endl;
  file1 << walkSpeed << endl;
  file1 << flySpeed << endl;
  file1 << burrowSpeed << endl;
  file1 << swimSpeed << endl;
  file1 << size << endl;
  file1.close();
  path2 = "MonsterData/SpecialData/" + id + ".txt";
  file2.open(path2);
  file2 << extraInfo << endl;
  file2 << "END" << endl;
  file2.close();
}

void Monster::loadStats()
{
  path1 = "MonsterData/RegularData/" + id + ".txt";
  file1.open(path1);
  file1 >> Name;
  file1 >> Challenge;
  file1 >> HP;
  file1 >> AC;
  file1 >> Strength;
  file1 >> Dexterity;
  file1 >> Constitution;
  file1 >> Intelligence;
  file1 >> Wisdom;
  file1 >> Charisma;
  file1 >> walkSpeed;
  file1 >> flySpeed;
  file1 >> burrowSpeed;
  file1 >> swimSpeed;
  file1 >> size;
  file1.close();
  path2 = "MonsterData/SpecialData/" + id + ".txt";
  file2.open(path2);
  file2 >> extraInfo;
  file2.close();
}

void Monster::makeMonsterDefault()
{
  path3 = "MonsterData/DefaultMonsters/" + id2 + ".txt";
  file3.open(path3);
  file3 >> Name;
  file3.close();
  path1 = "MO"
} 
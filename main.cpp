#include "Headers.h"

using namespace std;

fstream fileStream;
string fileRead;
string setup;
string monsterRead;
string initialCommand;
string MonsterName;
string secondIn;
string input;
string input2;
string input3;
string input4;

int activeMCount;
int activePCount;
int activeFCount;
int attackDamage;
int monster1;

bool inCombat;
// sf::Packet packet;
// sf::TcpListener listener;

// 10 Players
Player P1;
Player P2;
Player P3;
Player P4;
Player P5;
Player P6;
Player P7;
Player P8;
Player P9;
Player P10;

friendCreature F1;
friendCreature F2;
friendCreature F3;
friendCreature F4;
friendCreature F5;
friendCreature F6;
friendCreature F7;
friendCreature F8;
friendCreature F9;
friendCreature F10;

// 50 Monsters
Monster M1;
Monster M2;
Monster M3;
Monster M4;
Monster M5;
Monster M6;
Monster M7;
Monster M8;
Monster M9;
Monster M10;
Monster M11;
Monster M12;
Monster M13;
Monster M14;
Monster M15;
Monster M16;
Monster M17;
Monster M18;
Monster M19;
Monster M20;
Monster M21;
Monster M22;
Monster M23;
Monster M24;
Monster M25;
Monster M26;
Monster M27;
Monster M28;
Monster M29;
Monster M30;
Monster M31;
Monster M32;
Monster M33;
Monster M34;
Monster M35;
Monster M36;
Monster M37;
Monster M38;
Monster M39;
Monster M40;
Monster M41;
Monster M42;
Monster M43;
Monster M44;
Monster M45;
Monster M46;
Monster M47;
Monster M48;
Monster M49;
Monster M50;

WHEE fun1;

void initialsetup();
void save();
void load();
void startInput();
void nextInput();
void combat();
void changeMonster();
void getInititive();


int main() 
{ 
  P1.id = "1";
  P2.id = "2";
  P3.id = "3";
  P4.id = "4";
  P5.id = "5";
  P6.id = "6";
  P7.id = "7";
  P8.id = "8";
  P9.id = "9";
  P10.id = "10";

  F1.id = "1";
  F2.id = "2";
  F3.id = "3";
  F4.id = "4";
  F5.id = "5";
  F6.id = "6";
  F7.id = "7";
  F8.id = "8";
  F9.id = "9";
  F10.id = "10";
  
  M1.id = "1";
  M2.id = "2";
  M3.id = "3";
  M4.id = "4";
  M5.id = "5";
  M6.id = "6";
  M7.id = "7";
  M8.id = "8";
  M9.id = "9";
  M10.id = "10";
  M11.id = "11";
  M12.id = "12";
  M13.id = "13";
  M14.id = "14";
  M15.id = "15";
  M16.id = "16";
  M17.id = "17";
  M18.id = "18";
  M19.id = "19";
  M20.id = "20";
  M21.id = "21";
  M22.id = "22";
  M23.id = "23";
  M24.id = "24";
  M25.id = "25";
  M26.id = "26";
  M27.id = "27";
  M28.id = "28";
  M29.id = "29";
  M30.id = "30";
  M31.id = "31";
  M32.id = "32";
  M33.id = "33";
  M34.id = "34";
  M35.id = "35";
  M36.id = "36";
  M37.id = "37";
  M38.id = "38";
  M39.id = "39";
  M40.id = "40";
  M41.id = "41";
  M42.id = "42";
  M43.id = "43";
  M44.id = "44";
  M45.id = "45";
  M46.id = "46";
  M47.id = "47";
  M48.id = "48";
  M49.id = "49";
  M50.id = "50";

  fileStream.open("setup.txt");
  fileStream >> fileRead;
  fileStream.close();
  fileStream.open("monsterStart.txt");
  fileStream >> monsterRead;
  fileStream.close();

  startInput();


  while (true)
  {
    nextInput();
  }
}





void startInput()
{
  cout << "Please enter Initial Command" << endl;
  cin >> input;

  if (input == "load") 
  {
    if (fileRead == "false")
    {
      cout << "Commencing setup" << endl;
      save();
    }
    else if (fileRead == "truee")
    {
      cout << "setup already complete. Loading data." << endl;
      load();
    }
    else
    {
      cout << "Commencing setup" << endl;
      save();
    }
  }
  else if (input == "Reset_Data")
  {
    fileRead = false;
    initialsetup();
    save();
  }

  else if (input == "Exit")
  {
    abort();
  }
  else
  {
    startInput();
  }
}

void nextInput()
{
  cout << "Please enter next command: ";
  cin >> secondIn;
  if (secondIn == "Restart")
  {
    startInput();
  }
  else if (secondIn == "Begin_Combat")
  {
    combat();
  }
  else if (secondIn == "Exit")
  {
    abort();
  }
  else if (secondIn == "Reset_Monster") 
  {
    changeMonster();
  }
  else if (secondIn == "Default_Monster")
  {
    cout << "Test";
  }
  else if (secondIn == "initiate_calculator")
  {
    cout << "Running..." << endl;
    fun1.calculate();
  }
  else
  {
    cout << "Invalid Response, Please Try Again." << endl;
  }
}

void changeMonster()
{
  cout << "Which monster(1-50) do you want to reset: ";
  cin >> monster1;
  switch(monster1) 
  {
    case 1:  M1.setup(); M1.saveStats();  break;
    case 2:  M2.setup(); M2.saveStats();  break;
    case 3:  M3.setup(); M3.saveStats();  break;
    case 4:  M4.setup(); M4.saveStats();  break;
    case 5:  M5.setup(); M5.saveStats();  break;
    case 6:  M6.setup(); M6.saveStats();  break;
    case 7:  M7.setup(); M7.saveStats();  break;
    case 8:  M8.setup(); M8.saveStats();  break;
    case 9:  M9.setup(); M9.saveStats();  break;
    case 10:  M10.setup(); M10.saveStats();  break;
    case 11:  M11.setup(); M11.saveStats();  break;
    case 12:  M12.setup(); M12.saveStats();  break;
    case 13:  M13.setup(); M13.saveStats();  break;
    case 14:  M14.setup(); M14.saveStats();  break;
    case 15:  M15.setup(); M15.saveStats();  break;
    case 16:  M16.setup(); M16.saveStats();  break;
    case 17:  M17.setup(); M17.saveStats();  break;
    case 18:  M18.setup(); M18.saveStats();  break;
    case 19:  M19.setup(); M19.saveStats();  break;
    case 20:  M20.setup(); M20.saveStats();  break;
    case 21:  M21.setup(); M21.saveStats();  break;
    case 22:  M22.setup(); M22.saveStats();  break;
    case 23:  M23.setup(); M23.saveStats();  break;
    case 24:  M24.setup(); M24.saveStats();  break;
    case 25:  M25.setup(); M25.saveStats();  break;
    case 26:  M26.setup(); M26.saveStats();  break;
    case 27:  M27.setup(); M27.saveStats();  break;
    case 28:  M28.setup(); M28.saveStats();  break;
    case 29:  M29.setup(); M29.saveStats();  break;
    case 30:  M30.setup(); M30.saveStats();  break;
    case 31:  M31.setup(); M31.saveStats();  break;
    case 32:  M32.setup(); M32.saveStats();  break;
    case 33:  M33.setup(); M33.saveStats();  break;
    case 34:  M34.setup(); M34.saveStats();  break;
    case 35:  M35.setup(); M35.saveStats();  break;
    case 36:  M36.setup(); M36.saveStats();  break;
    case 37:  M37.setup(); M37.saveStats();  break;
    case 38:  M38.setup(); M38.saveStats();  break;
    case 39:  M39.setup(); M39.saveStats();  break;
    case 40:  M40.setup(); M40.saveStats();  break;
    case 41:  M41.setup(); M41.saveStats();  break;
    case 42:  M42.setup(); M42.saveStats();  break;
    case 43:  M43.setup(); M43.saveStats();  break;
    case 44:  M44.setup(); M44.saveStats();  break;
    case 45:  M45.setup(); M45.saveStats();  break;
    case 46:  M46.setup(); M46.saveStats();  break;
    case 47:  M47.setup(); M47.saveStats();  break;
    case 48:  M48.setup(); M48.saveStats();  break;
    case 49:  M49.setup(); M49.saveStats();  break;
    case 50:  M50.setup(); M50.saveStats();  break;
  }
}
void calcRun()
{

}
void activeMonsters(int count)
{
  switch(count)
  {
    case 50:  	M50.inUse = true; activeMCount++;
    case 49:  	M49.inUse = true; activeMCount++;
    case 48:  	M48.inUse = true; activeMCount++;
    case 47:  	M47.inUse = true; activeMCount++;
    case 46:  	M46.inUse = true; activeMCount++;
    case 45:  	M45.inUse = true; activeMCount++;
    case 44:    M44.inUse = true; activeMCount++;
    case 43:    M43.inUse = true; activeMCount++;
    case 42:    M42.inUse = true; activeMCount++;
    case 41:    M41.inUse = true; activeMCount++;
    case 40:  	M40.inUse = true; activeMCount++;
    case 39:  	M39.inUse = true; activeMCount++;
    case 38:  	M38.inUse = true; activeMCount++;
    case 37:  	M37.inUse = true; activeMCount++;
    case 36:  	M36.inUse = true; activeMCount++;
    case 35:  	M35.inUse = true; activeMCount++;
    case 34:    M34.inUse = true; activeMCount++;
    case 33:    M33.inUse = true; activeMCount++;
    case 32:    M32.inUse = true; activeMCount++;
    case 31:    M31.inUse = true; activeMCount++;
    case 30:  	M30.inUse = true; activeMCount++;
    case 29:  	M29.inUse = true; activeMCount++;
    case 28:  	M28.inUse = true; activeMCount++;
    case 27:  	M27.inUse = true; activeMCount++;
    case 26:  	M26.inUse = true; activeMCount++;
    case 25:  	M25.inUse = true; activeMCount++;
    case 24:    M24.inUse = true; activeMCount++;
    case 23:    M23.inUse = true; activeMCount++;
    case 22:    M22.inUse = true; activeMCount++;
    case 21:    M21.inUse = true; activeMCount++;
    case 20:  	M20.inUse = true; activeMCount++;
    case 19:  	M19.inUse = true; activeMCount++;
    case 18:  	M18.inUse = true; activeMCount++;
    case 17:  	M17.inUse = true; activeMCount++;
    case 16:  	M16.inUse = true; activeMCount++;
    case 15:  	M15.inUse = true; activeMCount++;
    case 14:    M14.inUse = true; activeMCount++;
    case 13:    M13.inUse = true; activeMCount++;
    case 12:    M12.inUse = true; activeMCount++;
    case 11:    M11.inUse = true; activeMCount++;
    case 10:  	M10.inUse = true; activeMCount++;
    case 9:  	  M9.inUse = true; activeMCount++;
    case 8:  	  M8.inUse = true; activeMCount++;
    case 7:  	  M7.inUse = true; activeMCount++;
    case 6:  	  M6.inUse = true; activeMCount++;
    case 5:  	  M5.inUse = true; activeMCount++;
    case 4:     M4.inUse = true; activeMCount++;
    case 3:     M3.inUse = true; activeMCount++;
    case 2:     M2.inUse = true; activeMCount++;
    case 1:     M1.inUse = true; activeMCount++;
  }
}

void getInititive()
{
  switch (activeMCount)
  {
    case 50:    M50.getInititive();
    case 49:  	M49.getInititive();
    case 48:  	M48.getInititive();
    case 47:  	M47.getInititive();
    case 46:  	M46.getInititive();
    case 45:  	M45.getInititive();
    case 44:    M44.getInititive();
    case 43:    M43.getInititive();
    case 42:    M42.getInititive();
    case 41:    M41.getInititive();
    case 40:  	M40.getInititive();
    case 39:  	M39.getInititive();
    case 38:  	M38.getInititive();
    case 37:  	M37.getInititive();
    case 36:  	M36.getInititive();
    case 35:  	M35.getInititive();
    case 34:    M34.getInititive();
    case 33:    M33.getInititive();
    case 32:    M32.getInititive();
    case 31:    M31.getInititive();
    case 30:  	M30.getInititive();
    case 29:  	M29.getInititive();
    case 28:  	M28.getInititive();
    case 27:  	M27.getInititive();
    case 26:  	M26.getInititive();
    case 25:  	M25.getInititive();
    case 24:    M24.getInititive();
    case 23:    M23.getInititive();
    case 22:    M22.getInititive();
    case 21:    M21.getInititive();
    case 20:  	M20.getInititive();
    case 19:  	M19.getInititive();
    case 18:  	M18.getInititive();
    case 17:  	M17.getInititive();
    case 16:  	M16.getInititive();
    case 15:  	M15.getInititive();
    case 14:    M14.getInititive();
    case 13:    M13.getInititive();
    case 12:    M12.getInititive();
    case 11:    M11.getInititive();
    case 10:  	M10.getInititive();
    case 9:  	  M9.getInititive();
    case 8:  	  M8.getInititive();
    case 7:  	  M7.getInititive();
    case 6:  	  M6.getInititive();
    case 5:  	  M5.getInititive();
    case 4:     M4.getInititive();
    case 3:     M3.getInititive();
    case 2:     M2.getInititive();
    case 1:     M1.getInititive();
  }
  switch (activePCount)
  {
    case 10: P10.getInititive();
    case 9: P9.getInititive();
    case 8: P8.getInititive();
    case 7: P7.getInititive();
    case 6: P6.getInititive();
    case 5: P5.getInititive();
    case 4: P4.getInititive();
    case 3: P3.getInititive();
    case 2: P2.getInititive();
    case 1: P1.getInititive();
  }
  switch (activeFCount)
  {
    case 10: F10.getInititive();
    case 9: F9.getInititive();
    case 8: F8.getInititive();
    case 7: F7.getInititive();
    case 6: F6.getInititive();
    case 5: F5.getInititive();
    case 4: F4.getInititive();
    case 3: F3.getInititive();
    case 2: F2.getInititive();
    case 1: F1.getInititive();
  } 
}

void combat()
{
  cout << "Commencing Combat" << endl;

  cout << "How many monsters? ";
  cin >> input;

  activeMCount = 0;

  activeMonsters(stoi(input));

  getInititive();

  inCombat = true;
  while (inCombat == true)
  {
    if (P1.inititive > P2.inititive && P1.inititive > P3.inititive && P1.inititive > P4.inititive && P1.inititive > P5.inititive && P1.inititive > P6.inititive && P1.inititive > P7.inititive && P1.inititive > P8.inititive && P1.inititive > P9.inititive && P1.inititive > P10.inititive  && P1.inititive > F1.inititive &&P1.inititive > F2.inititive && P1.inititive > F3.inititive && P1.inititive > F4.inititive && P1.inititive > F5.inititive && P1.inititive > F6.inititive && P1.inititive > F7.inititive && P1.inititive > F8.inititive && P1.inititive > F9.inititive && P1.inititive > F10.inititive && P1.inititive > M1.inititive && P1.inititive > M2.inititive && P1.inititive > M3.inititive && P1.inititive > M4.inititive && P1.inititive > M5.inititive && P1.inititive > M6.inititive && P1.inititive > M7.inititive && P1.inititive > M8.inititive && P1.inititive > M9.inititive && P1.inititive > M10.inititive && P1.inititive > M11.inititive &&P1.inititive > M12.inititive && P1.inititive > M13.inititive && P1.inititive > M14.inititive && P1.inititive > M15.inititive && P1.inititive > M16.inititive && P1.inititive > M17.inititive && P1.inititive > M18.inititive && P1.inititive > M19.inititive && P1.inititive > M20.inititive && M21.inititive > M22.inititive && P1.inititive > M23.inititive && P1.inititive > M24.inititive && P1.inititive > M25.inititive && P1.inititive > M26.inititive && P1.inititive > M27.inititive && P1.inititive > M28.inititive && P1.inititive > M29.inititive && P1.inititive > M30.inititive && P1.inititive > M31.inititive && P1.inititive > M32.inititive && P1.inititive > M33.inititive && P1.inititive > M34.inititive && P1.inititive > M35.inititive && P1.inititive > M36.inititive && P1.inititive > M37.inititive && P1.inititive > M38.inititive && P1.inititive > M39.inititive && P1.inititive > M40.inititive && P1.inititive > M41.inititive && P1.inititive > M42.inititive && P1.inititive > M43.inititive && P1.inititive > M44.inititive && P1.inititive > M45.inititive && P1.inititive > M46.inititive &&P1.inititive > M47.inititive && P1.inititive > M48.inititive && P1.inititive > M49.inititive && P1.inititive > M50.inititive)
    {
      cout << "P1 Turn";
    }

    if (P2.inititive > P1.inititive && P2.inititive > P3.inititive && P2.inititive > P4.inititive && P2.inititive > P5.inititive && P2.inititive > P6.inititive && P2.inititive > P7.inititive && P2.inititive > P8.inititive && P2.inititive > P9.inititive && P2.inititive > P10.inititive  && P2.inititive > F1.inititive &&P2.inititive > F2.inititive && P2.inititive > F3.inititive && P2.inititive > F4.inititive && P2.inititive > F5.inititive && P2.inititive > F6.inititive && P2.inititive > F7.inititive && P2.inititive > F8.inititive && P2.inititive > F9.inititive && P2.inititive > F10.inititive && P2.inititive > M1.inititive && P2.inititive > M2.inititive && P2.inititive > M3.inititive && P2.inititive > M4.inititive && P2.inititive > M5.inititive && P2.inititive > M6.inititive && P2.inititive > M7.inititive && P2.inititive > M8.inititive && P2.inititive > M9.inititive && P2.inititive > M10.inititive && P2.inititive > M11.inititive &&P2.inititive > M12.inititive && P2.inititive > M13.inititive && P2.inititive > M14.inititive && P2.inititive > M15.inititive && P2.inititive > M16.inititive && P2.inititive > M17.inititive && P2.inititive > M18.inititive && P2.inititive > M19.inititive && P2.inititive > M20.inititive && M21.inititive > M22.inititive && P2.inititive > M23.inititive && P2.inititive > M24.inititive && P2.inititive > M25.inititive && P2.inititive > M26.inititive && P2.inititive > M27.inititive && P2.inititive > M28.inititive && P2.inititive > M29.inititive && P2.inititive > M30.inititive && P2.inititive > M31.inititive && P2.inititive > M32.inititive && P2.inititive > M33.inititive && P2.inititive > M34.inititive && P2.inititive > M35.inititive && P2.inititive > M36.inititive && P2.inititive > M37.inititive && P2.inititive > M38.inititive && P2.inititive > M39.inititive && P2.inititive > M40.inititive && P2.inititive > M41.inititive && P2.inititive > M42.inititive && P2.inititive > M43.inititive && P2.inititive > M44.inititive && P2.inititive > M45.inititive && P2.inititive > M46.inititive &&P2.inititive > M47.inititive && P2.inititive > M48.inititive && P2.inititive > M49.inititive && P2.inititive > M50.inititive)
    {
      cout << "P2 Turn";
    }

    if (P3.inititive > P1.inititive && P3.inititive > P2.inititive && P3.inititive > P4.inititive && P3.inititive > P5.inititive && P3.inititive > P6.inititive && P3.inititive > P7.inititive && P3.inititive > P8.inititive && P3.inititive > P9.inititive && P3.inititive > P10.inititive  && P3.inititive > F1.inititive &&P3.inititive > F2.inititive && P3.inititive > F3.inititive && P3.inititive > F4.inititive && P3.inititive > F5.inititive && P3.inititive > F6.inititive && P3.inititive > F7.inititive && P3.inititive > F8.inititive && P3.inititive > F9.inititive && P3.inititive > F10.inititive && P3.inititive > M1.inititive && P3.inititive > M2.inititive && P3.inititive > M3.inititive && P3.inititive > M4.inititive && P3.inititive > M5.inititive && P3.inititive > M6.inititive && P3.inititive > M7.inititive && P3.inititive > M8.inititive && P3.inititive > M9.inititive && P3.inititive > M10.inititive && P3.inititive > M11.inititive &&P3.inititive > M12.inititive && P3.inititive > M13.inititive && P3.inititive > M14.inititive && P3.inititive > M15.inititive && P3.inititive > M16.inititive && P3.inititive > M17.inititive && P3.inititive > M18.inititive && P3.inititive > M19.inititive && P3.inititive > M20.inititive && M21.inititive > M22.inititive && P3.inititive > M23.inititive && P3.inititive > M24.inititive && P3.inititive > M25.inititive && P3.inititive > M26.inititive && P3.inititive > M27.inititive && P3.inititive > M28.inititive && P3.inititive > M29.inititive && P3.inititive > M30.inititive && P3.inititive > M31.inititive && P3.inititive > M32.inititive && P3.inititive > M33.inititive && P3.inititive > M34.inititive && P3.inititive > M35.inititive && P3.inititive > M36.inititive && P3.inititive > M37.inititive && P3.inititive > M38.inititive && P3.inititive > M39.inititive && P3.inititive > M40.inititive && P3.inititive > M41.inititive && P3.inititive > M42.inititive && P3.inititive > M43.inititive && P3.inititive > M44.inititive && P3.inititive > M45.inititive && P3.inititive > M46.inititive &&P3.inititive > M47.inititive && P3.inititive > M48.inititive && P3.inititive > M49.inititive && P3.inititive > M50.inititive)
    {
      cout << "P3 Turn";
    }

    if (P4.inititive > P1.inititive && P4.inititive > P2.inititive && P4.inititive > P3.inititive && P4.inititive > P5.inititive && P4.inititive > P6.inititive && P4.inititive > P7.inititive && P4.inititive > P8.inititive && P4.inititive > P9.inititive && P4.inititive > P10.inititive  && P4.inititive > F1.inititive &&P4.inititive > F2.inititive && P4.inititive > F3.inititive && P4.inititive > F4.inititive && P4.inititive > F5.inititive && P4.inititive > F6.inititive && P4.inititive > F7.inititive && P4.inititive > F8.inititive && P4.inititive > F9.inititive && P4.inititive > F10.inititive && P4.inititive > M1.inititive && P4.inititive > M2.inititive && P4.inititive > M3.inititive && P4.inititive > M4.inititive && P4.inititive > M5.inititive && P4.inititive > M6.inititive && P4.inititive > M7.inititive && P4.inititive > M8.inititive && P4.inititive > M9.inititive && P4.inititive > M10.inititive && P4.inititive > M11.inititive &&P4.inititive > M12.inititive && P4.inititive > M13.inititive && P4.inititive > M14.inititive && P4.inititive > M15.inititive && P4.inititive > M16.inititive && P4.inititive > M17.inititive && P4.inititive > M18.inititive && P4.inititive > M19.inititive && P4.inititive > M20.inititive && M21.inititive > M22.inititive && P4.inititive > M23.inititive && P4.inititive > M24.inititive && P4.inititive > M25.inititive && P4.inititive > M26.inititive && P4.inititive > M27.inititive && P4.inititive > M28.inititive && P4.inititive > M29.inititive && P4.inititive > M30.inititive && P4.inititive > M31.inititive && P4.inititive > M32.inititive && P4.inititive > M33.inititive && P4.inititive > M34.inititive && P4.inititive > M35.inititive && P4.inititive > M36.inititive && P4.inititive > M37.inititive && P4.inititive > M38.inititive && P4.inititive > M39.inititive && P4.inititive > M40.inititive && P4.inititive > M41.inititive && P4.inititive > M42.inititive && P4.inititive > M43.inititive && P4.inititive > M44.inititive && P4.inititive > M45.inititive && P4.inititive > M46.inititive &&P4.inititive > M47.inititive && P4.inititive > M48.inititive && P4.inititive > M49.inititive && P4.inititive > M50.inititive)
    {
      cout << "P4 Turn";
    }

    if (P5.inititive > P1.inititive && P5.inititive > P2.inititive && P5.inititive > P3.inititive && P5.inititive > P4.inititive && P5.inititive > P6.inititive && P5.inititive > P7.inititive && P5.inititive > P8.inititive && P5.inititive > P9.inititive && P5.inititive > P10.inititive  && P5.inititive > F1.inititive &&P5.inititive > F2.inititive && P5.inititive > F3.inititive && P5.inititive > F4.inititive && P5.inititive > F5.inititive && P5.inititive > F6.inititive && P5.inititive > F7.inititive && P5.inititive > F8.inititive && P5.inititive > F9.inititive && P5.inititive > F10.inititive && P5.inititive > M1.inititive && P5.inititive > M2.inititive && P5.inititive > M3.inititive && P5.inititive > M4.inititive && P5.inititive > M5.inititive && P5.inititive > M6.inititive && P5.inititive > M7.inititive && P5.inititive > M8.inititive && P5.inititive > M9.inititive && P5.inititive > M10.inititive && P5.inititive > M11.inititive &&P5.inititive > M12.inititive && P5.inititive > M13.inititive && P5.inititive > M14.inititive && P5.inititive > M15.inititive && P5.inititive > M16.inititive && P5.inititive > M17.inititive && P5.inititive > M18.inititive && P5.inititive > M19.inititive && P5.inititive > M20.inititive && M21.inititive > M22.inititive && P5.inititive > M23.inititive && P5.inititive > M24.inititive && P5.inititive > M25.inititive && P5.inititive > M26.inititive && P5.inititive > M27.inititive && P5.inititive > M28.inititive && P5.inititive > M29.inititive && P5.inititive > M30.inititive && P5.inititive > M31.inititive && P5.inititive > M32.inititive && P5.inititive > M33.inititive && P5.inititive > M34.inititive && P5.inititive > M35.inititive && P5.inititive > M36.inititive && P5.inititive > M37.inititive && P5.inititive > M38.inititive && P5.inititive > M39.inititive && P5.inititive > M40.inititive && P5.inititive > M41.inititive && P5.inititive > M42.inititive && P5.inititive > M43.inititive && P5.inititive > M44.inititive && P5.inititive > M45.inititive && P5.inititive > M46.inititive &&P5.inititive > M47.inititive && P5.inititive > M48.inititive && P5.inititive > M49.inititive && P5.inititive > M50.inititive)
    {
      cout << "P5 Turn";
    }

    if (P6.inititive > P1.inititive && P6.inititive > P2.inititive && P6.inititive > P3.inititive && P6.inititive > P4.inititive && P6.inititive > P5.inititive && P6.inititive > P7.inititive && P6.inititive > P8.inititive && P6.inititive > P9.inititive && P6.inititive > P10.inititive  && P6.inititive > F1.inititive &&P6.inititive > F2.inititive && P6.inititive > F3.inititive && P6.inititive > F4.inititive && P6.inititive > F5.inititive && P6.inititive > F6.inititive && P6.inititive > F7.inititive && P6.inititive > F8.inititive && P6.inititive > F9.inititive && P6.inititive > F10.inititive && P6.inititive > M1.inititive && P6.inititive > M2.inititive && P6.inititive > M3.inititive && P6.inititive > M4.inititive && P6.inititive > M5.inititive && P6.inititive > M6.inititive && P6.inititive > M7.inititive && P6.inititive > M8.inititive && P6.inititive > M9.inititive && P6.inititive > M10.inititive && P6.inititive > M11.inititive &&P6.inititive > M12.inititive && P6.inititive > M13.inititive && P6.inititive > M14.inititive && P6.inititive > M15.inititive && P6.inititive > M16.inititive && P6.inititive > M17.inititive && P6.inititive > M18.inititive && P6.inititive > M19.inititive && P6.inititive > M20.inititive && M21.inititive > M22.inititive && P6.inititive > M23.inititive && P6.inititive > M24.inititive && P6.inititive > M25.inititive && P6.inititive > M26.inititive && P6.inititive > M27.inititive && P6.inititive > M28.inititive && P6.inititive > M29.inititive && P6.inititive > M30.inititive && P6.inititive > M31.inititive && P6.inititive > M32.inititive && P6.inititive > M33.inititive && P6.inititive > M34.inititive && P6.inititive > M35.inititive && P6.inititive > M36.inititive && P6.inititive > M37.inititive && P6.inititive > M38.inititive && P6.inititive > M39.inititive && P6.inititive > M40.inititive && P6.inititive > M41.inititive && P6.inititive > M42.inititive && P6.inititive > M43.inititive && P6.inititive > M44.inititive && P6.inititive > M45.inititive && P6.inititive > M46.inititive && P6.inititive > M47.inititive && P6.inititive > M48.inititive && P6.inititive > M49.inititive && P6.inititive > M50.inititive)
    {
    cout << "P6 Turn";
    }

    if (P7.inititive > P1.inititive && P7.inititive > P2.inititive && P7.inititive > P3.inititive && P7.inititive > P4.inititive && P7.inititive > P5.inititive && P7.inititive > P6.inititive && P7.inititive > P8.inititive && P7.inititive > P9.inititive && P7.inititive > P10.inititive  && P7.inititive > F1.inititive &&P7.inititive > F2.inititive && P7.inititive > F3.inititive && P7.inititive > F4.inititive && P7.inititive > F5.inititive && P7.inititive > F6.inititive && P7.inititive > F7.inititive && P7.inititive > F8.inititive && P7.inititive > F9.inititive && P7.inititive > F10.inititive && P7.inititive > M1.inititive && P7.inititive > M2.inititive && P7.inititive > M3.inititive && P7.inititive > M4.inititive && P7.inititive > M5.inititive && P7.inititive > M6.inititive && P7.inititive > M7.inititive && P7.inititive > M8.inititive && P7.inititive > M9.inititive && P7.inititive > M10.inititive && P7.inititive > M11.inititive &&P7.inititive > M12.inititive && P7.inititive > M13.inititive && P7.inititive > M14.inititive && P7.inititive > M15.inititive && P7.inititive > M16.inititive && P7.inititive > M17.inititive && P7.inititive > M18.inititive && P7.inititive > M19.inititive && P7.inititive > M20.inititive && M21.inititive > M22.inititive && P7.inititive > M23.inititive && P7.inititive > M24.inititive && P7.inititive > M25.inititive && P7.inititive > M26.inititive && P7.inititive > M27.inititive && P7.inititive > M28.inititive && P7.inititive > M29.inititive && P7.inititive > M30.inititive && P7.inititive > M31.inititive && P7.inititive > M32.inititive && P7.inititive > M33.inititive && P7.inititive > M34.inititive && P7.inititive > M35.inititive && P7.inititive > M36.inititive && P7.inititive > M37.inititive && P7.inititive > M38.inititive && P7.inititive > M39.inititive && P7.inititive > M40.inititive && P7.inititive > M41.inititive && P7.inititive > M42.inititive && P7.inititive > M43.inititive && P7.inititive > M44.inititive && P7.inititive > M45.inititive && P7.inititive > M46.inititive && P7.inititive > M47.inititive && P7.inititive > M48.inititive && P7.inititive > M49.inititive && P7.inititive > M50.inititive)
    {
    cout << "P7 Turn";
    }

    
  }
}

void save()
{
  P1.saveStats();
  P2.saveStats();
  P3.saveStats();
  P4.saveStats();
  P5.saveStats();
  P6.saveStats();
  P7.saveStats();
  P8.saveStats();
  P9.saveStats();
  P10.saveStats();
}

void load()
{
  P1.loadStats();
  P2.loadStats();
  P3.loadStats();
  P4.loadStats();
  P5.loadStats();
  P6.loadStats();
  P7.loadStats();
  P8.loadStats();
  P9.loadStats();
  P10.loadStats();

  if (P1.inUse == true)
  {
    cout << "Welcome " << P1.name << " .";

  }
  if (P2.inUse == true)
  {
    cout << "Welcome " << P2.name << " .";
  }
  if (P3.inUse == true)
  {
    cout << "Welcome " << P3.name << " .";
  }
  if (P4.inUse == true)
  {
    cout << "Welcome " << P4.name << " .";
  }
  if (P5.inUse == true)
  {
    cout << "Welcome " << P5.name << " .";
  }
  if (P6.inUse == true)
  {
    cout << "Welcome " << P6.name << " .";
  }
  if (P7.inUse == true)
  {
    cout << "Welcome " << P7.name << " .";
  }
  if (P8.inUse == true)
  {
    cout << "Welcome " << P8.name << " .";
  }
  if (P9.inUse == true)
  {
    cout << "Welcome " << P9.name << " .";
  }
  if (P10.inUse == true)
  {
    cout << "Welcome " << P10.name << " .";
  }
}

void initialsetup()
{
  cout << "How many players? 1-10 ";
  cin >> input;

  if (stoi(input) >= 1)
  {
    P1.setup();
    P1.inUse = true;
  }
  else
  {
    P1.inUse = false;
  }

  if (stoi(input) >= 2)
  {
    P2.setup();
    P2.inUse = true;
  }
  else
  {
    P2.inUse = false;
  }

  if (stoi(input) >= 3)
  {
    P3.setup();
    P3.inUse = true;
  }
  else
  {
    P3.inUse = false;
  }

  if (stoi(input) >= 4)
  {
    P4.setup();
    P4.inUse = true;
  }
  else
  {
    P4.inUse = false;
  }

  if (stoi(input) >= 5)
  {
    P5.setup();
    P5.inUse = true;
  }
  else
  {
    P5.inUse = false;
  }

  if (stoi(input) >= 6)
  {
    P6.setup();
    P6.inUse = true;
  }
  else
  {
    P6.inUse = false;
  }

  if (stoi(input) >= 7)
  {
    P7.setup();
    P7.inUse = true;
  }
  else
  {
    P7.inUse = false;
  }

  if (stoi(input) >= 8)
  {
    P8.setup();
    P8.inUse = true;
  }
  else
  {
    P8.inUse = false;
  }

  if (stoi(input) >= 9)
  {
    P9.setup();
    P9.inUse = true;
  }
  else
  {
    P9.inUse = false;
  }

  if (stoi(input) >= 10)
  {
    P10.setup();
    P10.inUse = true;
  }
  else
  {
    P10.inUse = false;
  }
  fileStream.open("setup.txt");
  fileStream << "true";
  fileStream.close();
}
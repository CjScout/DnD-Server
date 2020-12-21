#include "ExtraFunctions1.h"
#include <iostream>

string in1;
int in2;

void WHEE::calculate()
{
  cout << "Add, Multiply, Subtract, Divide, or Other: ";
  cin >> in1;
  if (in1 == "Add") 
  {
    in2 = 1;
  } else if (in1 == "Multiply")
  {
    in2 = 2;
  } else if (in1 == "Subtract")
  {
    in2 = 3;
  } else if (in1 == "Divide")
  {
    in2 = 4;
  } else
  {
    in2 = 5;
  }
  switch(in2)
  {
    case 1:
      cout << "Please enter the two adders:";
      cin >> num1;
      cin >> num2;
      out1 = to_string(num1 + num2);
      cout << "The sum of these two numbers is " + out1 << endl;
    break;
    case 2:
      cout << "Please enter the first number and the multiplier: ";
      cin >> num1;
      cin >> mult1;
      out1 = to_string(num1 * mult1);
      cout << "The product of these two numbers is " + out1 << endl;
    break;
    case 3: 
      cout << "Please enter the two subtractors: ";
      cin >> num1;
      cin >> num2;
      out1 = to_string(num1 - num2);
      cout << "The difference of these two numbers are " + out1 << endl;
    break;
    case 4: 
      cout << "Please enter the first number and the divider: ";
      cin >> num1;
      cin >> mult1;
      out1 = to_string(num1 / mult1);
      cout << "The quotient of these two numbers is " + out1 << endl;
    break;
    case 5: 
      cout << "What do you wish to do instead: ";
    break;
  }
}
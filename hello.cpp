#include <iostream>
#include <string>

using namespace std; 

int main(){
  // This is a C++ comment  

  cout << "Hello Sparks" << endl;

  // Data Types
  const double PI = 3.1415926535;

  char myGrade = 'A';

  bool isHappy = true;

  int myAge = 39;

  float favNum = 3.141592;

  double otherfavNum = 1.750;

  cout << "Favorite Number" << favNum << endl;

  // Other Data types include 
  // short int : At least 16 bits 
  // long int : At least 32 bits 
  // long long int : At least 64 bits 
  // unsigned int: Same size as signed version
  // long double : Not less then double 

  // Print the size of an int 

  cout << "Size of int " << sizeof(myAge)
      << endl;

  // Print the largest int possible 

  int largestInt = 2147483647;

  cout << "Largest int " << largestInt << endl;

  // Arithmetic 
  cout << "5 + 2 = " << 5+2 << endl;
  cout << "5 - 2 = " << 5-2 << endl;
  cout << "5 * 2 = " << 5*2 << endl;
  cout << "5 / 2 = " << 5/2 << endl;
  cout << "5 % 2 = " << 5%2 << endl;

  return 0; 
}
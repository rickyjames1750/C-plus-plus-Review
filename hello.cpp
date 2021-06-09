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

  // Shortcuts for increments and decrements
  int five = 5;

  cout << "5++ = " << five++ << endl;
  cout << "++5 = " << ++five << endl;
  cout << "5-- = " << five-- << endl;
  cout << "--5 = " << --five << endl;

  five += 6; five = five + 6;

  // Order of Operations states * and / is performed before any + and - (similar to pemdas in pre-school math)
  
  // Correct order of operations
  cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
  // We can see here it is important to use braces all the time or else it will result in a wrong answer possibly like below
  cout << "(1 + 2 -3) * 2 = " << (1 + 2 - 3) * 2 << endl;

  cout << "4 / 5 = " << 4 / 5 << endl; 
  // Performing casting 
  cout << "4 / 5 = " << (float) 4 / 5 << endl; 

// If statements 
// Comparison operators == , != , > , < , >= , <=
// Logical operators && , || , !

int age = 70;
int ageAtLastExam = 16; 
bool isNotIntoxicated = true;

if((age >= 1) && (age < 16)){

  cout << "You can't drive" << endl;  

} else if(! isNotIntoxicated){

  cout << "You can't drive" << endl;

} else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){

  cout << "You can't drive" << endl;

} else {
  cout << "You can drive" << endl; 

}

// Switch Statements

int greetingOption = 2; 

switch(greetingOption){

  case 1 : 
    cout << "bonjour" << endl;
    break;
  case 2 :
    cout << "Hola" << endl; 
    break; 
  case 3 : 
    cout << "Hallo" << endl;
    break;
  default :
    cout << "Hello" << endl; 
}

// Ternary Operator 
//variable = (condition) ? true : false
//int largestNum = (5>2) ? 5 : 2;

// Arrays 

int myFavNums[5];

int badNums[5] = {4, 13, 14, 24, 34};

cout << "Bad Number 1: " << badNums[0] << endl;

char myName[5][6] = {{'R', 'i', 'c', 'k', 'y'}, {'S', 'p', 'a', 'r', 'k', 's'}};

cout << "2nd letter in 2nd array " << myName[1][1] << endl;

myName[0][2] = 'e';

cout << "New Value " << myName[0][2] << endl; 

// For loops 
for(int i = 1; i <= 10; i++){

  cout << i << endl; 
}

for(int j = 0; j < 5; j++) {

  for(int y = 0; y < 5; y++){

    cout << myName[j][y];

    cout << endl;
  }
}

return 0; 

}
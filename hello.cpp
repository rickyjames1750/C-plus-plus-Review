#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std; 

void makeMeYoung(int* age){
  cout << "I used to be " << *age << endl;
  *age = 21; 
}

void actYourAge(int& age){
  age = 22;
}

//Classes & Objects 
class Animal{
  //Attributes : height weight variables 
  //capabilities : Run Eat functions / methods 

  // Private 
  private: 
      int height;
      int weight; 
      string name; 

      //Static variables 
      static int numOfAnimals; 
  public: 
      int getHeight(){ return height; }
      int getWeight(){ return weight; }
      string getName(){ return name; }
      void setWeight(int cm){ height = cm; }
      void setName(int animalName){ height = animalName; }

      void setAll(int, int, string);

      //Constructors 
      Animal(int, int, string); 

      ~Animal();

      Animal();

};

int main(){
  // This is a C++ comment  

  cout << "Hello Sparks" << endl;

  // Data Types
  const double PI = 3.1415926535;

  char myGrade = 'A';

  bool isHappy = true;

  int myAge = 19;

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
// While Loop
int randNum = (rand() % 100) + 1;

while(randNum != 100){

  cout << randNum << ", ";

  randNum = (rand() % 100) +1;
}
cout << endl; 

}

int index = 1; 

while(index <= 10){

  cout << index << endl; 

  index++;  
  
}

string numberGuessed;
int intNumberGuessed = 0;

// Do While Loop 
do {

  cout << "Guess between 1 and 10 (hint = 4): ";

  // User Input 
  getline(cin, numberGuessed);

  // Convert string 
  intNumberGuessed = stod(numberGuessed);

  cout << intNumberGuessed << endl; 

} while(intNumberGuessed != 4);

cout << "You win" << endl; 

// Strings 

// The C way 
char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
// The C++ way 
string birthdayString = " Birthday";

cout << happyArray + birthdayString << endl;

string yourName;
cout << "What is your name ";
getline(cin, yourName);

cout << "hello " << yourName << endl;


// Double , from string to double 
double eulersConstant = .57721;
string eulerGuess;
double eulerGuessDouble;

cout << "What is Euler's Constant? ";
getline(cin, eulerGuess);

eulerGuessDouble = stod(eulerGuess);

if(eulerGuessDouble == eulersConstant){

  cout << "You are right" << endl;
} else {

  cout << "You are wrong" << endl;

} 
  cout << "Size of String " << eulerGuess.size() << endl;
  cout << "Is string empty " << eulerGuess.empty() << endl;
  cout << eulerGuess.append(" was your guess") << endl;

  // Even more strings 
  string dogString = "dog";
  string catString = "cat";

  cout << dogString.compare(catString) << endl;
  cout << dogString.compare(dogString) << endl;
  cout << catString.compare(dogString) << endl;

  //Assigning values copies to another string 
  string wholeName = yourName.assign(yourName);
  cout << wholeName << endl;

  string firstName = wholeName.assign(wholeName, 0, 5);
  cout << firstName << endl;

  int lastNameIndex = yourName.find("Sparks", 0);
  cout << "Index for last name " << lastNameIndex << endl;

  yourName.insert(5, " Justin");
  cout << yourName << endl;

  yourName.insert (5, " Justin");
  cout << yourName << endl;

  yourName.erase(6, 7);
  cout << yourName << endl;

  yourName.replace(6, 5, "Maximus");
  cout << yourName << endl;

  // Vectors 
  vector <int> lotteryNumVect(10);

  int lotteryNumArray[5] = {4, 13, 14, 24, 34};

  lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

  lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

  cout << lotteryNumVect.at(5) << endl; 

  lotteryNumVect.push_back(64);

  cout << "First Value " << lotteryNumVect.empty() << endl;

  lotteryNumVect.pop_back(); 

///// Note this was moved up inorder for it to fall under the int main scope and get the fstream include
// FILE I/O

string steveQuote = "A day without sunshine is like, you know, night";
// This creates a output filestream 
ofstream writer("stevequote.txt");

// This will verify that the file stream object was built 
if(! writer){

  cout << "Error opening file" << endl;

  // Signal that an error occurred 
  return -1;
} else {

  // This will write the text to the file 
  writer << steveQuote << endl;

  // This will close the file 
  writer.close();
}

ofstream writer2("stevequote.txt", ios::app);

if(! writer2){

  cout << "Error opening file" << endl;

  // Signal that an error occurred
  return -1;
} else {

  writer2 << "\n- Steve Martin" << endl;
  writer2.close();
} 

char letter;

// This will read characters from a file using an input file stream
ifstream reader("stevequote.txt");

if(! reader){

  cout << "Error opening file" << endl; 
  return -1;
} else {
  // Read each character from the stream until end of file
  for(int i = 0; ! reader.eof(); i++){

    // Get the next letter and outpgut it 
    reader.get(letter);
    cout << letter;
  }
  
  cout << endl; 
  reader.close();
}

//////// Exception Handling 

  int number = 0; 

  try{

    if(number != 0){

      cout << 2/number << endl; 
    } else throw(number); 
  }

  catch(int number){

    cout << number << " is not valid" << endl; 

  }

// Pointers 
  int myAge2 = 20;
	//char myGrade2 = 'A';
 
	//cout << "Size of int " << sizeof(myAge2) << endl;
	//cout << "Size of char " << sizeof(myGrade2) << endl; 

  int* agePtr = &myAge; 

  cout << "Address of pointer " << agePtr << endl;

  cout << "Data at memory address " << *agePtr << endl; 

  int badNums2[5] = {4, 13, 14, 24, 34};

  int* numArrayPtr = badNums2;

  cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl; 
 
  cout << "Address " << badNums2 << " Value " << *badNums2 << endl;   

  makeMeYoung(&myAge);

  cout << "I'm " << myAge << " years old now" << endl;

  int& ageRef = myAge;

  cout << "myAge : " << myAge << endl; 

  ageRef++;

  cout << "myAge : " << myAge << endl; 

  actYourAge(ageRef); 

  cout << "myAge : " << myAge << endl; 

////////  

return 0;
}

////////////// OUTSIDE INT MAIN /////////////////


// Functions
int addNumbers(int firstNum, int secondNum = 0){
    
    int combinedValue = firstNum + secondNum;
 
		return combinedValue;
 
}
 
// An overloaded function has the same name, but different attributes
int addNumbers(int firstNum, int secondNum, int thirdNum){
 
  return firstNum + secondNum + thirdNum;
 
} 

int getFactorial(int number){

  int sum;
  if(number == 1) sum = 1;
  else sum = getFactorial(number -1) * number;
  return sum; 
} 

int fact(){

  cout << addNumbers(1) << endl; 
  cout << addNumbers(1, 5, 6) << endl; 
  cout << "The factorial of 3 is " << getFactorial(3) << endl;
  return 0;
}

// End of C++ Review/Practice 
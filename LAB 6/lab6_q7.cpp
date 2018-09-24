#include<iostream> //Including the library

using namespace std;

//Part a) A function to convert a lowercase character to its uppercase
char toUpper(char inputChar)
{
 char convertedChar;
 convertedChar = inputChar - 32; //Using the fact that difference between the uppercase and lowercase of a character is 32
 return (convertedChar); 
}

//Part a) A function to convert a uppercase character to its lowercase
char toLower(char inputChar)
{
 char convertedChar;
 convertedChar = inputChar + 32; //Using the fact that difference between the uppercase and lowercase of a character is 32
 return (convertedChar);
}

//The main function begins 
int main()
{
 char ch;
 
 cout <<"Enter an alphabetical character" <<endl;
 cin >> ch;

/*In the following conditional loop we are using these facts
  ASCII value range for 'A' to 'Z' is 65 to 90
  ASCII value range for 'a' to 'z' is 97 to 122
*/
 if (ch >= 65 && ch <= 90) //To convert uppercase into lowercase
 {
  cout <<"The lowercase of " <<ch <<" is " <<toLower(ch) <<endl; //Calling the second function and displaying the output 
 }
  
 else if (ch >= 97 && ch <= 122) //To convert lowercase into uppercase
 {
  cout <<"The uppercase of " <<ch <<" is " <<toUpper(ch) <<endl; //Calling the first function and displaying the output
 }

 else //Supposing the user does not enter an alphabetical character
 {
  cout <<"You have not entered an alphabetical character!" <<endl;
 }

 return 0;
} 
//The program ends

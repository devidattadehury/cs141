#include<iostream> //Including the library

using namespace std;

//Part a) A function which outputs the sum of all even numbers between two given numbers
int sumEvenNumbers(int firstNum, int secondNum)
{
 int i, sum = 0; 

 for (i = firstNum; i <= secondNum; i++)
 {

//Conditional loop to check the even numbers and do the addition  
  if (i % 2 == 0)
  {
   sum += i;
  }
  
  else
  {
   continue;
  }
 }
 
 return (sum);  
}

//Part b) A function which outputs the sum of all odd numbers between two given numbers
int sumOddNumbers(int firstNum, int secondNum)
{
 int i, sum = 0;
 
 for (i = firstNum; i <= secondNum; i++)
 {

//Conditional loop to check the odd numbers and do the addition  
  if (i % 2 != 0)
  {
   sum += i;
  }
  
  else
  {
   continue;
  }
 }
 
 return (sum);  
}

//Part c) A function which outputs the sum of squares of all even numbers between two given numbers
int sumSquareEvenNumbers(int firstNum, int secondNum)
{
 int i, sum = 0, square;
 
 for (i = firstNum; i <= secondNum; i++)
 {
  
//Conditional loop to check the even numbers and do the squaring as well as addition
  if (i % 2 == 0)
  {
   square = i * i;
   sum += square;
  }
  
  else
  {
   continue;
  }
 }
 
 return (sum);  
} 

//Part d) A function which outputs the sum of squares of all odd numbers between two given numbers
int sumSquareOddNumbers(int firstNum, int secondNum)
{
 int i, sum = 0, square;
 
 for (i = firstNum; i <= secondNum; i++)
 {

//Conditional loop to check the odd numbers and do the squaring as well as addition  
  if (i % 2 != 0)
  {
   square = i * i;
   sum += square;
  }
  
  else
  {
   continue;
  }
 }
 
 return (sum);  
} 

//The main function begins
int main()
{

/*Declaring the variables
  sumEven = to hold the sum of first function
  sumOdd = to hold the sum of second function
  sumSquareEven = to hold the sum of third function
  sumSquareOdd = to hold the sum of fourth function
  firstNumber = to hold the first number of the range defined
  secondNumber = to hold the second number of the range defined     
*/  
 int sumEven, sumOdd, sumSquareEven, sumSquareOdd;
 int firstNumber, secondNumber;

 cout <<"Enter the first number" <<endl;
 cin >> firstNumber;

 cout <<"Enter the second number" <<endl;
 cin >> secondNumber;

//Calling the respective functions
 sumEven = sumEvenNumbers(firstNumber, secondNumber);
 sumOdd = sumOddNumbers(firstNumber, secondNumber);
 sumSquareEven = sumSquareEvenNumbers(firstNumber, secondNumber);
 sumSquareOdd = sumSquareOddNumbers(firstNumber, secondNumber);

//Displaying the sums
 cout <<"The sum of even numbers is " <<sumEven <<endl;
 cout <<"The sum of odd numbers is " <<sumOdd <<endl;
 cout <<"The sum of squares of even numbers is " <<sumSquareEven <<endl;
 cout <<"The sum of squares of odd numbers is " <<sumSquareOdd <<endl;  

 return 0;
}
//Program ends 
 

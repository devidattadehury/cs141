#include<iostream> //Including the library

using namespace std;

//A function to find sum of two numbers
int sumOfNumbers(int x, int y)
{
 int sum; 
 sum = x + y; 
 return (sum);
}

//A function to find the maximum of two numbers
int maxOfNumbers(int x, int y)
{
 int max;
 
//Conditional loop to find the greater number
 if (x > y)
 {
  max = x;
  return (max);
 }
 
 else
 {
  max = y;
  return (max);
 }  
}

//A function to find the minimum of two numbers
int minOfNumbers(int x, int y)
{
 int min;
 
//Conditional loop to find the smaller number
 if (x < y)
 {
  min = x;
  return (min);
 }
 
 else
 {
  min = y;
  return (min);
 }  
}

//The main function begins
int main()
{
 int num1, num2, choice; //Variable "choice" is to find out what the user wishes to perform

 cout <<"Enter two different numbers" <<endl;
 cin >>num1;
 cin >>num2;
 
 cout <<"Choice 1: add two numbers" <<endl;
 cout <<"Choice 2: find maximum of two numbers" <<endl;
 cout <<"Choice 3: find minimum of two numbers" <<endl;
 cout <<"Enter your choice" <<endl;
 cin >>choice;

//A conditional loop to perform a task as per the user's wish
 if (choice == 1) //To add
 {
  int add = sumOfNumbers(num1, num2);
  cout <<"The sum of " <<num1 <<" and " <<num2 <<" is " <<add <<endl;
 }
 
 else if (choice == 2) //To find maximum number
 {
  int maximum = maxOfNumbers(num1, num2);
  cout <<"The maximum between " <<num1 <<" and " <<num2 <<" is " <<maximum <<endl; 
 }
 
 else if (choice == 3) //To find minimum number
 {
  int minimum = minOfNumbers(num1, num2);
  cout <<"The minimum between " <<num1 <<" and " <<num2 <<" is " <<minimum <<endl; 
 }

 else //If user enters some other input
 {
  cout <<"Sorry, you have entered the wrong choice" <<endl;
 }
 return 0;
}
//The program ends

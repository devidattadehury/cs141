#include<iostream> //Including the library

using namespace std;

//A function to find the minimum of two numbers using "by value" method 
int minByValue(int x, int y)
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
 int a, b, minimum;
 
 cout <<"Enter the two different numbers" <<endl;
 cin >>a;
 cin >>b;
 
 minimum = minByValue(a, b); //Calling the function
 
 cout <<"The minimum between " <<a <<" and " <<b <<" is " <<minimum <<endl; //Displaying the output
 return 0;
}
//The program ends  


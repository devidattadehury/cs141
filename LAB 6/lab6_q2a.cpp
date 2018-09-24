#include<iostream> //Including the library

using namespace std;

//A function to find the sum of two numbers using "by value" method 
int sumByValue(int x, int y)
{
 int sum; 
 sum = x + y; 
 return (sum);
}

//The main function begins
int main()
{
 int a, b, result;
 
 cout <<"Enter the two numbers" <<endl;
 cin >>a;
 cin >>b;
 
 result = sumByValue(a, b); //Calling the function
 
 cout <<"The sum of " <<a <<" and " <<b <<" is " <<result <<endl; //Displaying the output
 return 0;
}
//The program ends  


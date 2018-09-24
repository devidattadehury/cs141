#include<iostream> //Including the library

using namespace std;

//A function to find the maximum of two numbers using "by reference" method 
void maxByReference(int x, int y, int &max)
{ 
//Conditional loop to find the greater number
 if (x > y)
 {
  max = x;
 }
 
 else
 {
  max = y;
 }  
}

//The main function begins
int main()
{
 int a, b, maximum;
 
 cout <<"Enter the two numbers" <<endl;
 cin >>a;
 cin >>b;
 
 maxByReference(a, b, maximum); //Calling the function
 
 cout <<"The maximum between " <<a <<" and " <<b <<" is " <<maximum <<endl; //Displaying the output

 return 0;
}
//The program ends  


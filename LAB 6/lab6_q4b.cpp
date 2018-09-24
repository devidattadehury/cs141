#include<iostream> //Including the library

using namespace std;

//A function to find the minimum of two numbers using "by reference" method 
void minByReference(int x, int y, int &min)
{ 
//Conditional loop to find the smaller number
 if (x < y)
 {
  min = x;
 }
 
 else
 {
  min = y;
 }  
}

//The main function begins
int main()
{
 int a, b, minimum;
 
 cout <<"Enter the two numbers" <<endl;
 cin >>a;
 cin >>b;
 
 minByReference(a, b, minimum); //Calling the function
 
 cout <<"The minimum between " <<a <<" and " <<b <<" is " <<minimum <<endl; //Displaying the output

 return 0;
}
//The program ends  


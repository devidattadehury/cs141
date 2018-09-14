#include<iostream> //Including the library

using namespace std;

int main() //The main function 
{
//Program to print a rhombus star pattern
 
 int n; //Variable n = number of rows and columns

 cout <<"Enter the number of rows and columns" <<endl;
 cin >>n;

 for (int i = n; i >= 1; i--) //Variable i = for printing the rows 
 {
   
  for (int j = 1; j <= i; j++) //Variable j = for printing the spaces
  {  
   cout <<" ";
  }

  for (int k = 1; k <= n; k++) //Variable k = for printing the stars
  {
   cout <<"*";
  }     
  
  cout <<endl; //For shifting the control to next line
 }
 return 0;
}   
//Program ends

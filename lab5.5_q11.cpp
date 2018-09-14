#include<iostream> //Including the library

using namespace std;

int main()
{
//Program to print a hollow mirrored right triangle star pattern

 int n; //Variable n = number of rows and columns
 
 cout <<"Enter the number of rows and columns" <<endl;
 cin >>n;
 
 for (int i = n; i>= 1; i--) //Variable i = for printing the rows
 {
  
  for (int j = 1; j <= i; j++) //Variable j = for printing the spaces before triangle
  {
   cout <<" ";
  }
 
  for (int k = 1; k <= n - i + 1; k++) //Variable k = for printing the stars and spaces inside triangle
  {
//The following "if-else" loop is for deciding whether to print stars or spaces at the required places of the triangle

   if (k == n || k == 1 || i == n || i == 1 || k == n - i + 1)
   { 
    cout <<"*";
   }

   else 
   {
    cout <<" ";
   }   
  }
  cout <<endl;
 }
 return 0;
} 
//Program ends  

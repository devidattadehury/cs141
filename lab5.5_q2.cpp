#include<iostream> //Including the library

using namespace std;

int main() // the main function
{
//Program to print a hollow square star pattern 

 int n; //Variable n = number of rows and columns
 
 cout <<"Enter the number of rows and columns"; cout<<endl;
 cin >>n;
 
 for (int i = 1; i <= n; i++) //Variable i = for printing the rows
 {

  for (int j =  1; j <= n; j++) //Variable j = for printing the columns
  {
//The following "if-else" loop is for deciding whether to print stars or spaces at the required places of the square

   if (j == 1 || j == n || i == 1 || i == n) 
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


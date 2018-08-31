/*
* To find the maximum between three numbers
*/



#include<iostream>
using namespace std;


int main(){
         int num1, num2, num3 ;
   cout << "write the three different numbers:";
   cin >> num1 >> num2 >> num3 ;
   
   if (num1 >= num2 && num1 >= num3)
{
   cout << "first number" << num1 << "is the maximum" << endl;
}   
   else if (num2 >= num1 && num2 >= num3)
{
   cout << "second number" << num2 << "is the maximum " << endl;
}      
   else
{
   cout << "third number" << num3 << "is the maximum " << endl;
}
 
   return 0;
}

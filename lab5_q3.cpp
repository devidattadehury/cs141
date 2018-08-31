/*
* C++ program to check whether a number is negative, positive or zero.
*/


#include<iostream>
using namespace std;


int main(){
          
          int a;
   cout << "write a number:";
   cin >> a ;

   if (a=0)
{
   cout << " a = zero " << endl;
}
   else if (a>0)
{
   cout << " a = positive " << endl;
}
   else
{
   cout << " a = negative " << endl;
}
     return 0;
}

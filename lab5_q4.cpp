/*
* C++ program to check whether a number is divisible by 5 and 11 or not.
*/


#include<iostream>
using namespace std;


int main(){
         int a;
  cout << " write a number:" ;
  cin >> a ;
   if ((a%5==0) && (a%11==0))
{
  cout << " the number is divisible by 5 and 11:" << endl;
}
 else
{
  cout << " not divisible: " << endl ;
}
  return 0;
}

/*
* C++ program to check whether a number is even or odd.
*/


#include<iostream>
using namespace std;


int main(){
       int a;
  cout << "write a number:" ;
  cin >> a;
 if ((a=2) && (a%2==0))
{
  cout << "the number is even " << endl;
}
 else 
{
  cout << " the number is odd " << endl;
}

  return 0;
}

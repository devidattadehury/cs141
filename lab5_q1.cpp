/*
* To find the maximum between two numbers
*/



#include<iostream>
using namespace std;


int main(){
        //the two different numbers
         int num1, num2;
        cout << "write the first number and the second number:";
        cin >> num1>>num2;
        if (num1>num2)
{
    cout << "first number" << num1 << " is the maximum " << endl;
}
  else
{
    cout << "second number" << num2 << "is the maximun " << endl;
}


     return 0;
}

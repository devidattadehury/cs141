/*
* C++ program to enter temperature in Celsius and covert it into Fahrenheit. 
*/

#include<iostream>
using namespace std;

int main(){
       // Declaration of variable
        float fahrenheit, celsius;
     cout << "what is the temperature in Celsius?";
     cin >> celsius;
       // Convert into Fahrenheit;
     fahrenheit = (celsius*9.0)/5.0+32;
     cout << "Then temperature in Fahrenheit: " << fahrenheit << endl;
return 0;
}

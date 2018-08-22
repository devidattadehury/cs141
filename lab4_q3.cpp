/*
* C++ program to enter temperature in Fahrenheit and covert it into Celsius. 
*/

#include<iostream>
using namespace std;

int main(){
       // Declaration of variable
        float fahrenheit, celsius;
     cout << "what is the temperature in Fahrenheit?";
     cin >> fahrenheit;
       // Convert into Celsius;
     celsius = (fahrenheit-32)*5/9;
     cout << "Then temperature in Celsius: " << celsius << endl;
return 0;
}

/*
* Write a C++ program to enter length in cm and convert it into m and km.
*/
#include<iostream>
using namespace std;

int main(){
            // Declaration of variables
             float cm,m,km;


            //Enter length in cm
             cout <<  "What is the length in cm?";
             cin >> cm;
            // Convert into m
            m = cm/100;
            // Convert into km
            km = m/1000;
            //Display the output
           cout << "length in m : "<< m << endl;
           cout << "length in km : "<< km << endl;
      return 0;
}















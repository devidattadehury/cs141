/*
*Write a C++ program to enter the base and height of a triangle and find its area.
*/
#include<iostream>
using namespace std;

int main(){
int h,b,area;
   cout << "what is the area of the triangle?";

   cout << "the height of the triangle is";
     cin >> h;
   cout << "the base of the triangle is";
     cin >> b;
   area = (b*h)/2;
   cout << "the area of the triangle is:" << area << endl;
    
return 0;
}

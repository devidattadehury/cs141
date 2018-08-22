/*
*Write a program in C++ to enter two angles of a triangle and find the third angle
*/
#include<iostream>
using namespace std;

int main(){
         // Declaration of variables
         float ang1,ang2,ang3;


        cout << "what is the third angle of the triangle?";
        cout << "the 1st angle";
        cin >> ang1;
        cout << "the 2nd angle";
        cin >> ang2;
  ang3 = 180- (ang1+ang2);
        cout << "the 3rd of the triangle is :" << ang3 << endl; 
return 0;
}

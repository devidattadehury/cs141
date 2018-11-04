/* Write a program to declare two variables a,b and a pointer variable p (all integer type). 
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
Assign values a=2 and b = 3. Print the values of a, b and *p. 
Now point p to b. Print the values of a, b and *p. */

#include <iostream>//include library

using namespace std;

int main()
{
    //Declare variables and pointer
    int a,b;int* p=&a;//Pointer p points to a
    b=*p;//Assigning value of *p to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p<<endl;//Print
    a=2,b=3;//Assigning value to variables
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p<<endl;//Print
    p=&b;//Pointing to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p;//Print
    return 0;
}

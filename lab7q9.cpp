#include<iostream>
using namespace std;
//recursion to find factorial of any no.
int factorial(int a) 
{
    if (a > 1) 
    {
        return a*factorial(a-1);
    }
    else 
    {
        return 1;
    }
}
//main function
int main() 
{
//ask for input from user
    int n;
    cout<<"Enter a number to find factorial: ";
    cin >> n;
//display the result obtained by the recursion
    cout << "Factorial of " << n <<" = " << factorial(n) <<endl;
    return 0;
}

#include<iostream>
using namespace std;
//recursion to display all natural no.s from lowest to highest
//i is lowest and a is highest.
int numbers(int i,int a) 
{
    if (a >= i) 
    {
//displaying no.s starting from lowest
		cout <<i <<endl;
		numbers(i + 1,a);
    }
	else
	{cout <<endl;
	}
}
//main function
int main() 
{
//we define i=1 as display starts from 1 in the question
//ask for input from user
    int n,i=1;
    cout<<"Enter a number to get natural no.s from 1 to that no.: ";
    cin >> n;
//display the result obtained by the recursion
//as i=1 we should get natural no.s from 1 to the desired input
	numbers(i,n);
    return 0;
}

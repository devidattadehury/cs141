#include<iostream>
using namespace std;
//recursion to display all odd natural numbers and even natural numbers separately from 1 to a desired no.
int numbers(int i,int a) 
{
    if (a >= i+1) 
    {
//displaying no.s starting from lowest first no. i(left) is odd i+1(right) is even
		cout <<i <<" " <<i+1 <<endl;
//recursion
		numbers(i + 2,a);
    }
	else if(i == a)
	{
		cout <<i <<endl;
	}
}
//main function
int main() 
{
//we define i=1 as display starts from 1
//ask for input from user
    int n,i=1;
    cout<<"Enter a number to get odd natural no.s and even natural no.s from 1 to that no.: ";
    cin >> n;
//display the result obtained by the recursion
//as i=1 we should get odds and evens from 1 to the desired input
	cout <<"odds are atleft and evens are at right" <<endl;
	numbers(i,n);
    return 0;
}

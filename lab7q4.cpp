#include<iostream>
using namespace std;
//recursion to get sum of a numbers from 1 to a desired number x
int summation(int x) 
{
    if (x > 1) 
    {
		return x+summation(x-1);
    }
	else
	{
		return x;
	}
}
//main function
int main() 
{
//ask for input from user
    int m;
//ask for base
    cout<<"Enter the number you want add upto ";
    cin >> m;
//display the result obtained by the recursion
	cout <<"sum of all natural no.s upto " <<m <<" is " <<summation(m) <<endl;
    return 0;
}

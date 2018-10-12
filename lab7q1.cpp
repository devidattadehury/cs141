
#include<iostream>
using namespace std;
//recursion to get power of a number
int xtopy(int x,int y) 
{
    if (y > 1) 
    {
		return x*xtopy(x,y-1);
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
    int m,n;
//ask for base
    cout<<"Enter a number you want as base ";
    cin >> m;
//ask for exponent
	cout<<"enter the exponent";
	cin >>n;
//display the result obtained by the recursion
	cout <<m <<" raised to the power " <<n <<" is " <<xtopy(m,n) <<endl;
    return 0;
}

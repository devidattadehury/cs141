#include<iostream>
#include<cmath>
using namespace std;
//recursion to get reverse of a number
int rev(int n)
{	int digit = (int)log10(n);
	if(n == 0)
		{return 0;
		}
	else if(n > 0)
		{return ((n%10*pow(10,digit))+rev(n/10));
		}
	else
		{return -rev(-n);
		}
}
int main()
{//ask the user for input
cout <<"enter the number you want to reverse ";
int a;
cin >>a;
//display the result using the recursive function rev
cout <<"reverse of "<<a <<"is "<<rev(a);
return 0;
}

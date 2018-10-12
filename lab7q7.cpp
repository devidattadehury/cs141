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
cout <<"enter the number you want to check as pallindromic or not ";
	int a;
	cin >>a;
	int k = rev(a);
//check if the reverse of the no. is same as no. itself using the above recursion
//display the corresponding result
	if(a == k)
	{	cout <<a <<" is pallindromic";
	}
	else
	{	cout <<a <<" is not pallindromic";
	}
}

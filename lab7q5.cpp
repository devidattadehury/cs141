#include<iostream>
#include<cmath>
using namespace std;
int addevens(int a)
{int k=(a%2);
if(k == 0)
	{
		if(a == 0)
		{return 0;
		}
		else
		{return a+addevens(a-2);}
	}
else	{	
	if(a == 1)
	{return 0;}
	else{return a-1 + addevens(a - 2);}
	}
}
int addodds(int a)
{int k=(a%2);
if(k == 1)
	{
		if(a == 1)
		{return 1;
		}
		else
		{return a+addodds(a-2);}
	}
else	{	
	if(a == 2)
	{return 1;}
	else{return a-1 + addodds(a - 2);}
	}
}
int main()
{cout <<"enter upper limit";
int n;cin >>n;
cout <<"enter lower limit";
int k;cin >>k;
if(k%2 == 1)
	{cout <<"SUM OF EVENS "<<addevens(n)-addevens(k) <<endl;
	cout <<"SUM OF ODDS IS "<<addodds(n)-addodds(k)+k <<endl;
	}
else
	{cout <<"SUMOF EVENS IS" <<addevens(n)-addevens(k)+k <<endl;
	cout <<"SUM OF ODDS IS" <<addodds(n)-addodds(k) <<endl;
	}
return 0;
}

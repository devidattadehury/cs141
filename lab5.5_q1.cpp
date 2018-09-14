/*
*C++ program for printing the square star pattern.
*/

#include<iostream>

using namespace std;


     int main(){
          
	int l,b;

	cout << "Give a value for length l " ;
	cin >> l;

	cout << "Give a value for width b " ;
	cin >> b;
               
	for(int i= 0;i < l; i++)
        { 
         for(int j=1;j < b; j++)
          
		{
			cout<<"*";
		
		}
{     
      cout << "*" << endl ;
}
        }
	return 0;
}

#include<iostream>
using namespace std;

int arr(int i) {
int j;
int sum = 0;
int array [i] ;

        for (j=0 ; j < i ; j++ ) {
                cout << "Enter " << j + 1 << "th element : " ;
                cin >> array [j] ;
        }

        for (j=0 ; j<i ; j++) {
                sum = sum + array [j];
        }

	cout << "The sum of all the array elements is " << sum << endl ;
    
}

int main () { 
        int i; 
		cout << " Q1 " << endl ;
		cout << "Enter the size of the array : " ;
		cin >> i ;

        arr (i) ;
}
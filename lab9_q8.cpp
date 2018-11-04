/*Write a function myStrLen(char*) which returns the length of the parameter cstring. 
Write the function without using the C++ function strlen.*/
#include <iostream>// include library
using namespace std;
int myStrLen(char* p)
{
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)//Loop to count the length
    {
        count++;
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<< endl;
    char arr[size];//Declare the array with max size
    cout<<"Enter the string:"<<endl;
    cin>>arr;
    char* p=&arr[0];//point to array
    cout<<"Length of the string:"<<myStrLen(p);//call the function
    return 0;
}

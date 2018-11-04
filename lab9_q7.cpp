/*Write a function that returns a pointer to the maximum value of an array of double's. 
If the array is empty, return NULL.*/
#include <iostream>//include library
using namespace std;
double* maximum(double* a, int size)
{
   
    int x;
    //sort array in descending order
    for(int i=0;i<size;i++)
    {
	    for(int j=i+1;j<size;j++)
	    {
		    if(*(a+i)<*(a+j))
		    {
			    x=*(a+i);
			    *(a+i)=*(a+j);
			    *(a+j)=x;
		    }
	    }
    }
    return a;
}
int main()
{
    //Give the size of the array and put input
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    double arr[size];
    if(size!=0)//Check whether the size is zero or not
    {
        cout<<"Enter input(charcter by character)to array"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        double* p=&arr[0];
        cout<<"Max:"<<*maximum(p,size);//call the function
    }
    else
    {
        cout<<"Size of the array is zero"<<endl;
        cout<<"Max=NULL";
    }
    return 0;
}

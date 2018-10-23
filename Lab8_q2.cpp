#include <iostream> 
 using namespace std;

 //Finding largest element 

int largest(int i) {
    int j;
    int array [i] ;
        for (j=0 ; j<i ; j++) {
            cout << " Enter " << j+1 << "th element of the array : " ;
            cin >> array [j] ;
        }
    
    int large = array [0];
        for (j=0 ; j < i ; j++) {
            if (large < array [j]){
                large = array [j]; 
            }
        
        }
    cout << "The largest element is " << large << endl;
}

//finding smallest element

int smallest(int i) {
    int j;
    int array [i] ;
        for (j=0 ; j<i ; j++) {
            cout << " Enter " << j+1 << "th element of the array : " ;
            cin >> array [j] ;
        }
    
    int small = array [0];
        for (j=0 ; j < i ; j++) {
            if (small > array [j]){
                small = array [j]; 
            }
        
        }
    cout << "The smallest element is " << small << endl;

}

//Finding mean

int mean(int i) {
    int j;
    float sum = 0.0;
    float Mean;
    float array [i] ;

            for (j=0 ; j < i ; j++ ) {
                    cout << " Enter " << j + 1 << "th element : " ;
                    cin >> array [j] ;
            }

            for (j=0 ; j<i ; j++) {
                    sum = sum + array [j];
            }
        
        Mean = sum / i ;

        cout << "The mean of the given element is " << Mean << endl;

}

//Finding Median

int median(float arr[],int size)             //Function for finding the median of the elements in array
{
    int temp;           //Declaring variables
    float medn;
    for(int i=0;i<size;i++)                //Condition for finding the median of the elements
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }


    }
    if(size%2!=0)
    {
        medn=arr[((size+1)/2)-1];
        return medn;
    }
    else
        medn=(arr[(size/2)-1]+arr[size/2])/2;
        return medn;



}

//Finding mode
    int mode(float arr[],int size)              //Function for finding the mode of the elements in array
{
    int count[size];      //Calling above function
    for(int h=0;h<size;h++)                //Condition for finding the mode of the elements
    {
        count[h]=0;
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;i!=j&&j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count[i]++;
            }
        }
    }
    int temp=0;
    for(int k=1;k<size;k++)
    {
        if(count[temp]<count[k])
        {
            temp=k;
        }
    }
    return arr[temp];
}

int main () {
    int j ;
    int i;
        cout << "Q.2 " << endl;
        cout << "Enter the size of the array : " ;
        cin >> i;
        cout << "What you want to find ?" << endl;
        cout << "1. Largest" << endl;
        cout << "2. Smallest" << endl;
        cout << "3. Mean" << endl;
        cout << "4. Median" << endl;
        cout << "5.mode" << endl;
        cout << "Option no. : ";
        cin >> j;

        if (j==1){
            largest (i);
        }

        else if (j==2){
            smallest (i);
        }

        else if (j==3) {
            mean (i);
        }
        else if (j==4){
            median (i);
            }
        else if (j==5){
            mode (i);
           }
        else {
        
         cout<< "Sorry, Try again" << endl;
       }
          
        
        
        
}
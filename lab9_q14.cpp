/* Create a string and store your name in it.
Use a loop to print string character by character using the normal index method
as well as the pointer method.  */

#include <iostream>//include library
using namespace std;
int main()
{
    char arr[20];
    cout<<"Enter your name:"<<endl;
    cin.getline(arr,20);
    //Print string character by character using normal index method
    cout<<"Using normal index method"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
    cout<<endl<<"Using pointer method"<<endl;
    //Print values character by character using pointer method
    char* p=&arr[0];
    for(int i=0;i<10;i++)
    {
        cout<<*(p+i);
    }
    return 0;
}

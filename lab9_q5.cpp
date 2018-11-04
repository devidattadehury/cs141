//Write a piece of code which prints the characters in a cstring in a reverse order.
#include <iostream>//include library
using namespace std;
int main()
{
   char c[10] ="abcde";//Declare an array
   cout<<"Given array:"<<c<<endl;
   char* cptr;//declare a pointer
   cptr=c;//point to array
   cout<<"Reverse:";
   for(int i=10;i>=0;i--)//Use loop to print characters in reverse order
   {
       cout<<*(cptr+i);
   }
   return 0;
}

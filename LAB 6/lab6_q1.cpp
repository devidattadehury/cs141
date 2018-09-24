#include<iostream> //Including the library

using namespace std;

//Part a) A function to obtain the values of unit cost, purchase units and tax rate from the user
void enterData(double &unitCst, double &units, double &taxRt)
{
 cout <<"Enter the unit cost" <<endl;
 cin >>unitCst;

 cout <<"Enter the units of purchase" <<endl;
 cin >>units;

 cout <<"Enter the tax rate (in %)" <<endl;
 cin >>taxRt;
}

//Part b) A function to receive the above values and to find the sales tax and due amount 
void receiveData(double unitCst, double units, double taxRt, double &salesTx, double &totDue)
{

//Formulae for calculating the sales tax and due amount respectively
 salesTx = (unitCst * units * taxRt) / 100;
 totDue = salesTx + (units * unitCst);
}

//Part c) A function to receive the above values and to print the outout in a readable format
void printData(double unitCst, double units, double taxRt, double salesTx, double totDue)
{
 cout <<"The details of the tax payer are as follows:" <<endl; 

 cout <<"Unit Cost = Rs. " <<unitCst <<endl;
 cout <<"Units of Purchase = " <<units <<endl;
 cout <<"Tax Rate = " <<taxRt <<" %" <<endl;
 
 cout <<"Sales Tax = Rs. " <<salesTx <<endl;
 cout <<"Total Amount Due = Rs. " <<totDue <<endl;
}

//Part d) The main function begins
int main()
{
 double unitCost, unitsPurch, taxRate;
 double salesTax, totalDue;

//Calling the above mentioned functions 
 enterData(unitCost, unitsPurch, taxRate);
 receiveData(unitCost, unitsPurch, taxRate, salesTax, totalDue); 
 printData(unitCost, unitsPurch, taxRate, salesTax, totalDue);

 return 0;
}
//The program ends

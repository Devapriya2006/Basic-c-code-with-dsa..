/*Write a program to calculate the electricity bill according to the units when first 100 units we will take charge 0. 
Then further next 100 units we will take 5 rup per unit. 
After that 200 units we will take charges 10 rup per unit.
Now u have to calculate the amount would be pay by the user depends on their units.*/
#include<iostream>
using namespace std;
int main(){
    int unit,bill_amount;
    cout<< "Enter your current electricity unit:";
    cin >>unit ;
    if (unit>=0 && unit<=100)
    {
        cout<<"thank you for checking your electricity bill, you don't have to pay the bill.";
    }
    else if (unit>100 && unit<=200)
    {
        bill_amount=unit*5; 
    }
    else if (unit>200)
    {
        bill_amount=unit*10;
    }
    else{
        cout<<"oops! please give a proper input.";
    }
     cout<<"thank you for checking your electricity bill, you have to pay:" << bill_amount;
    return 0;
}

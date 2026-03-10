//wap to accept the cost price of a bike and display the road tax to be paid. If bike price is greater than 50k and less than or equal to 100000
// then tax paid 10% is greater than 100000 then 15% tax if less than or equal to 50k then 5% tax
#include<iostream>
using namespace std;
int main(){
    int tax,price;
    cout << "Enter the price of the bike:";
    cin >> price; 
    if (price>50000 && price<=100000)
    {
       tax=price*(0.10);
       cout<< "The payable tax for the bike is :" << tax ;
   }
    else if (price>100000)
    {
        tax=price*(0.15);
        cout<< "The payable tax for the bike is :" << tax ;
    }
    else if (price<=50000)
    {
        tax=price*(0.05);
        cout<< "The payable tax for the bike is :" << tax ;
    }
    else
    {
      cout<<" Entered price is not updated in the";
    }

    return 0;
}

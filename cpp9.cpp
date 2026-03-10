//reverse a number 
#include<iostream>
using namespace std;
int main(){
    int n,r=0,rem;
    cout << "Enter a number:";
    cin >> n;
    while (n!=0)
    {
       rem=n%10;
       r=r*10+rem;
       n=n/10;
    }
    cout<<"reversed Number:" << r;
    return 0;
}

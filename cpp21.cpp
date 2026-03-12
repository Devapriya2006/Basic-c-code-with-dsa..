//odd even by using function
#include<iostream>
using namespace std;
void check(int n){
        if (n==0)
        {
            cout<< n<<" is a nutral number.";
        }
        else if (n%2==0)
        {
            cout<< n<<"is a even number.";

        }

        else{
            cout<<n<<" is a odd number.";
        }
    }
int main(){
    int num;
    cout<<" Enter the number:";
    cin>> num;
    check(num);
    return 0;
}

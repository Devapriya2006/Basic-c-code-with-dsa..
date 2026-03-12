// factorial
#include <iostream>
using namespace std;

void factorial(int n) {
        int fact = 1,i;
        for (i = 2; i <= n; i++) {
            fact = fact * i;
        }
        cout<<"factorial is:"<< fact << endl;
    }

int main()
{
    int num ;
    cout <<  " enter the number which factorial you want:";
    cin>> num;
    factorial(num);
    return 0;
}

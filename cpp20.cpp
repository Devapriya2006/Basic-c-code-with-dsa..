// natural number
#include <iostream>
using namespace std;

void natural(int n) {
    cout << "The natural numbers are: ";
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num; 
    natural(num);
    return 0;
}

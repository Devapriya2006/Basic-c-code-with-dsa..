/*find max through call by address*/
#include<iostream>
using namespace std;

void findMax(int *a, int *b) {
    if(*a > *b)
        cout << "MAXIMUM for a = "<< *a;
    else
        cout << "MAXIMUM for b = "<< *b;
}

int main(){
    int x=100, y=200;
    findMax(&x, &y);
    return 0;
}

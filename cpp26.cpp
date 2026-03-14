//call by refference

#include<iostream>
using namespace std;

int main(){
    int a=100;
    cout << a <<endl; // 100 
    int &ref = a; // Reference &ref-->a=100
    cout << ref << endl; // 100
    cout << ++ref <<endl;  
    cout << a;
    return 0;
}

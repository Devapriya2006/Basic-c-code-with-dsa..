// fiboncci series program by using function
//a)0+b)1+1+2+.....+n
#include<iostream>
using namespace std;
void fibonacci( int n){ // function name -> fibonacci
    int a=0,b=1, temp;
    cout << "fiboncci series---";
    for(int i=0;i<n;i++){
        cout<< a <<"";
        temp=a+b;// 0+1
        a=b;// a=1
        b=temp; //b=1...n
    } 
}
int main(){
    int n;
    cout<< "Enter number of series:";// 5-->0+1+1+2+3
    cin>> n;
    fibonacci(n);//calling function
    return 0;
}

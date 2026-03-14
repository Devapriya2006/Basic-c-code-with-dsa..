//sum of array elements
#include<iostream>
using namespace std;
int main(){
    int a[5]={5,10,15,20,25},i,sum=0;
    for(i=0;i<5;i++){
        sum+=a[i]; // 1. 0+5=5, 2. 5+10=15, 3.15+15=30,4.30+20=50,5. 50+25=75
    }
    cout<<"Total sum="<< sum; //75
    return 0;

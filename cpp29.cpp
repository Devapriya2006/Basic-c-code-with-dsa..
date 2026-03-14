// array by using user input
#include<iostream>
using namespace std;

int main(){
    int a[5];
    cout << "Enter Array elements:";
      for(int i=0;i<5;i++){
        cin>> a[i];
    }
    cout << "The array elements is:"<<endl;

    for(int i=0;i<5;i++){
        cout << a[i] << endl;
    }
    return 0;
}

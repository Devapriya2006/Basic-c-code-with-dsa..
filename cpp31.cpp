// reverse the order of  an array
#include<iostream>
using namespace std;

int main(){
    int a[5];// {10,20,30,40,50}= give me the value from 4 to 0(i--) reverse
    cout << "Enter Array elements:";
      for(int i=0;i<5;i++){
        cin>> a[i];// 0-4 value are store
    }
    cout << "The array elements is:"<<endl;

    for(int i=4;i>=0;i--){  //50-->[4],40-->[3],30-->[2],20-->[1],10-->[0]
        cout << a[i] << endl;//50,40,30,20,10
    }
    return 0;
}

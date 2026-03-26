// Linear Search
#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50}; 
    int key = 30;
    int found = 0;
    
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout <<"Element found at index no: "<<i;
            found=1;
            break;
        }
    }
    if(found==0){
        cout<<"Element no found";
    }
    return 0;
}

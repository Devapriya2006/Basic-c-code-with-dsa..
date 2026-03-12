#include<iostream>
using namespace std;
void changevalue(int num){
    num+=10;
    cout<< num<< endl;
}
int main(){
    int num=100;
    cout<< num<<endl;
    changevalue(num);
    return 0;
}

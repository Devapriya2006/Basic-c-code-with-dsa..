//write a program to check if the year is leap year or not 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int y; 
    cout<<"enter year:"; 
    cin>>y; 
    if ((y%4==0 && y%100!=0)|| y%400==0) 
    { 
        cout<<"the year is leap year"; 
    } 
    else{ 
        cout<<"the year is not leap year"; 
    } 
return 0; 
}

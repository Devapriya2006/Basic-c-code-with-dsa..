//write a program to find if a person is eligible for vote or not
#include<iostream>
using namespace std;
int main()
{
    int a;
    char c;
    cout<< " are you an Indian cityzen?(y/n):";
    cin>>c;
    cout<<"enter your age:";
    cin>>a;

    if ((c=='Y'||c=='y')&&a>=18){

        cout<<"voter is eligible to vote";
    }
    else{
        cout<<"voter is not eligible to vote";
    }
return 0;
}

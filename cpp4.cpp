#include<iostream>
using namespace std;
int main()
{
int marks;
cout<<"enter your marks:";
cin>>marks;
if(marks>=90)
{
    cout<<"grade-a";
}
else if(marks>=75)
{
    cout<<"grade-b";
}
else if(marks>=60)
{
    cout<<"grade-c";
}
else
{
    cout<<"fail";
}
return 0;
}

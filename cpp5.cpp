#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter value of a:";
   cin>>a;
   cout<<"enter value of b:";
   cin>>b;
   cout<<"enter value of c:";
   cin>>c;
   if(a>b)
   {
    if(a>c)
    {
        cout<<a<<"is largest.";
    }
    else{
        cout<<c<<"is largest.";
    }
   }
   else{
    if(b>c)
    {
        cout<<b<<"is largest.";
    }
    else{
        cout<<c<<"is largest.";
    }
   }
   return 0;
}

//pointer concept 
//The pointer is a Variable that holds the memory address of another variable

#include <iostream>
using namespace std;

int main()
{
   int a=5;  
   int *p=&a;

   cout <<*p<<endl;  // *p --> a er value 5

   (*p)++; // ---> increment the value of a=5 --> 6

   cout << *p << endl; // 6

   return 0;
}

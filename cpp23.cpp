#include<iostream>
using namespace std;

void swap(int &a, int &b) {  // Reference Parameter 
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=5, y=10; 

    cout << "Before Swapping: x=" << x << " " << "y=" << y << endl;

    swap(x,y); 

   cout << "After Swapping: x=" << x <<  " " << "y=" << y;

    return 0;
}

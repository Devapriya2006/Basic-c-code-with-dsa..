/*Call By Address:-

 call by address is used when we want yo modify a variable inside a function and want that modification persist outside the function */
 #include<iostream>
using namespace std;

// Declare a function
void changeValue(int *p) {  // *p = (100)
    *p=*p+10; // 100 + 10 = 110
    cout <<"Pointer Value:"<< *p << endl; //110
}

// Main function
int main() {
    int num;  
    cout << "Enter a value:"; // 100 
    cin >> num; // 100
    cout << "Orginal value:"<< num << endl; // 100
    changeValue(&num); // num = 123456 
    cout << "New value:"<< num << endl; // 
    return 0;
}

//array:
/*Array:Array is a collection of elements of the same data type thar are stored sequentially in memory
Note: 
  1) The index of the Array elements start with 0
   syntax----> arr[3]= {10,20,30} 

  2) Array stored element contiguously in memory*/
  #include<iostream>
  using namespace std;
  int main(){
    int arr[5]={10,20,30,40,50},i;
    for (i=0;i<5;i++)
    cout<< arr[i] << endl;

  }

/*A student have a result where four subjects marks we have to calculate and calculate the total 
aggregate are if the aggregate is greater than 75% then we say he passed with distintion and .
if the aggreate is greater than 60% but less than 75% then the grade is good
if the aggrate greater than 40% and less than 60% then we say he passed and 
if the aggreate is less than 40% then we say he is falied*/
#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"the total percentage(%) you secure in exam:";
    cin>> percentage;
    if (percentage>=75)
    {
      cout<<"Distintion";
    }
    else if (percentage>60 && percentage<75)
    {
        cout<<"good";
    }
    else if (percentage>=40 && percentage<60)
    {
        cout<<"Passed";
    }
    else{
        cout<<"failed";
    }
    return 0;
}

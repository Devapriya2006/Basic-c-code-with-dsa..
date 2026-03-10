/* A company decided to give bonus to all the employ for new year 2026. 5% bonus is given to the male employee and 10% bonus is given to the female workaers
if the salary is less than 10k then the employee will get 2% bonus calculate the bonus that has to be given to the employee and also display
the salary*/
#include<iostream>
using namespace std;
int main(){
    int bonus,basic,total;
    char gender;
    cout<< " Enter the basic salary:";
    cin>> basic;
    cout<< " Enter the gender:";
    cin>> gender;
    gender=tolower(gender);
    if (basic>=10000 && gender=='m')
    {
      bonus=basic*(0.05);
      total=basic+bonus;
      cout<<"The bonus is :"<< bonus << endl;
      cout<<"so the total salary:" << total;
    }
    else if (basic>=10000 && gender=='f')
    {
      bonus=basic*(0.10);
      total=basic+bonus;
      cout<<"The bonus is :"<< bonus<< endl;
      cout<<"so the total salary:" << total;
    }
    else if (basic<10000 && gender=='f'||gender=='m')
    {
      bonus=basic*(0.02);
      total=basic+bonus;
      cout<<"The bonus is :"<< bonus << endl;
      cout<<"so the total salary:" << total;
    }
    else{
        cout<<"invalid input please check the input again.";
    }
 return 0;
}

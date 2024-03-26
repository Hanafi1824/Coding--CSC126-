#include <iostream>
using namespace std;

int main ()
{
     float new_salary, new_allowance;
     float salary, allowance;
     cout<<"Enter the current salary:RM ";
     cin>>salary;
     cout<<"Enter the current attendance allowance:RM ";
     cin>>allowance;
     
     if(salary <= 1500)
     { salary = salary * 0.12;
       allowance = allowance * 0.05;
     }
     
     cout<<"New salary is RM "<<salary<<endl;
     cout<<"New allowance is RM "<<allowance<<endl;  
}
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
     string name;
     cout<<"Enter the name of the employee: ";
     getline(cin, name);
     
     int marks;
     cout<<"Enter the performance marks: ";
     cin>>marks;
     
     float bonus;
     if (marks >= 6 && marks <= 10)
          bonus = 2500;
     else
          bonus = 1200;
          
     cout<<fixed<<showpoint;  
     cout<<endl<<name<<" received bonus of amount RM "<<setprecision(2)<<bonus;
     
}
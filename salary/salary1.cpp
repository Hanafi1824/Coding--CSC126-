#include <iostream> 
#include <string.h> 
#include <iomanip> 
using namespace std; 

int main () 
{ 
   string name1, name2, name3;
   float salary1, salary2, salary3;
   
   cout<<"Enter the name of the first employee: ";
   getline(cin, name1);
   cout<<"Enter his/her salary: RM ";
   cin>>salary1;
   cin.ignore();
   cout<<"Enter the name of the second employee: ";
   getline(cin, name2);
   cout<<"Enter his/her salary: RM ";
   cin>>salary2;
   cin.ignore();
   cout<<"Enter the name of the third employee: ";
   getline(cin, name3);
   cout<<"Enter his/her salary: RM ";
   cin>>salary3;
   cin.ignore();
   
   float average = (salary1 + salary2 + salary3) / 3;
   
   cout<<fixed<<showpoint;
   cout<<"\nName = "<<name1<<" Salary = RM "<<setprecision(2)<<salary1;
   cout<<"\nName = "<<name2<<" Salary = RM "<<setprecision(2)<<salary2;
   cout<<"\nName = "<<name3<<" Salary = RM "<<setprecision(2)<<salary3;
   cout<<"\nAverage salary is RM "<<setprecision(2)<<average;
   
   return 0; 

}
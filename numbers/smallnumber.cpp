#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int num1, num2;
    cout<<"Please enter 2 number seperated by space: ";
    cin>>num1>>num2;
    
    //smalest
    if (num1 < num2)
       cout<<num1<<" is the smallest. ";
    else
       cout<<num2<<" is the smallest. ";   
}

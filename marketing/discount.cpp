#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float amount;
    cout<<"Enter the amount purchased: RM ";
    cin>>amount;
    
    float discount = 0;
    if (amount >= 300 && amount <= 1000)
        discount = 0.055;
    if (amount >= 1000)
        discount = 0.065;
    
    float discountRM = discount * amount;
    float payment = amount - discountRM;
    
    cout<<"\nTotal payment after discount is RM "<<payment;
}
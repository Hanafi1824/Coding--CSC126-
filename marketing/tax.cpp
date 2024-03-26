#include <iostream>
using namespace std;

#define tax_rate 0.06

int main()
{
    float total;
    cout<<"\nEnter your total: ";
    cin>>total;
    
    float total_after_tax = total + (total * tax_rate);
    
    cout<<"\nYour total after tax is "<<total_after_tax;
}
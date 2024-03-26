#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float investment, profit;
    
    cout<<"Enter the amount of investment: RM ";
    cin>>investment;
    cout<<"Enter the amount of profit: RM ";
    cin>>profit;
    
    cout<<endl;
    if (investment >= profit && profit > 20000)
        cout<<"This investment is worthy to continue.";
    else
        cout<<"This investment is a waste of money.";
}
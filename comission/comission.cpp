#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float sale;
    cout<<"Enter the amount of sale: RM ";
    cin>>sale;
    
    float commission;
    if (sale > 10000)
       commission = sale * 0.05;
     
    else
       commission = sale * 0.03;
    
    cout<<"Your sales is RM "<<sale<<endl;
    cout <<"Your commission of the amount of sale is RM "<<commission;

    return 0;
       
}
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float invesment, rate;
    cout<<"Enter the total of invesment: RM ";
    cin>>invesment;
    
    if  (invesment <= 5000)
        rate = 0.002;
    else if (invesment <= 10000)
        rate = 0.003;
    else if (invesment <= 30000)
        rate = 0.008;
    else if (invesment <= 50000)
        rate = 0.01;
    else if (invesment <= 75000)
        rate = 0.011;
    else 
        rate = 0.013;
        
    cout<<"Dividend in RM "<<invesment * rate;
}
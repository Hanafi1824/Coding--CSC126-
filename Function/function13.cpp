#include <iostream>
using namespace std;

int simpleInterest (float a, float r, float t)
{
    float interest;
    interest = a * (1 + ((r / 100) * t) );
    return interest;
}
int main ()
{
    float loan;
    int time;
    float rate = 0.25;
    cout<<"Enter the amount of loan: Rm";
    cin>>loan;
    cout<<"Enter the time in years: ";
    cin>>time;
    cout<<"The interest is RM"<<simpleInterest(loan, rate, time)<<endl;
}
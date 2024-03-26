#include <iostream>
using namespace std;

int main()
{
    //declare variables
    float charges_per_credit_hour, number_of_hours_enrolled;

    //input
    cout<<"Enter the charges per credit hour: RM ";
    cin>>charges_per_credit_hour;
    cout<<"Enter the number of hours enrolled: ";
    cin>>number_of_hours_enrolled;

    //process
    float fees = charges_per_credit_hour * number_of_hours_enrolled;
    
    //output
    cout<<"\nYour fees is RM  "<<fees; 

    return 0;
}
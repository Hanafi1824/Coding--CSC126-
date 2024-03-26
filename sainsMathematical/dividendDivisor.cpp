#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout<<"Enter the dividend: ";
    cin>>num1;
    cout<<"Enter the divisor: ";
    cin>>num2;
    
    int quotient = num1 / num2;
    int remainder = num1 % num2;
    
    cout<<"\nQuotient is: "<<quotient<<endl;
    cout<<"Remainder is: "<<remainder<<endl;

    return 0;
}
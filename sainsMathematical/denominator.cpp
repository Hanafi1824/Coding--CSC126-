#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int num1, num2;
    cout<<"Enter the first number for numerator: ";
    cin>>num1;
    cout<<"Enter the second number for denominator: ";
    cin>>num2;

    float result;
    if (num2 != 0)
        result = num1 / num2 * 1.0;
    else
        cout<<"Sorry, the calculation is undefined.";
    
    cout<<fixed<<showpoint;
    cout<<"The result is "<<setprecision(2)<<result<<endl;

    return 0;
}

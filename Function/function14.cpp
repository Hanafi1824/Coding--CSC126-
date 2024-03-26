#include <iostream>
using namespace std;

int calcTotal(int num1, int num2)
{   return (num1 + num2);   }
int main()
{
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The total is "<<calcTotal(num1, num2)<<endl;
}
#include <iostream>
using namespace std;
int main ()
{
    int num1, num2;
    char the_operator;
    float result;

    cout<<"Enter the first operator: ";
    cin>>num1;
    cout<<"Enter the second operator: ";
    cin>>num2;
    cout<<"Enter the operator: ";
    cin>>the_operator;

    switch (the_operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    default:
        cout<<"Invalid operator";
    }
if (the_operator == '+' || the_operator == '-'|| the_operator == '*'|| the_operator == '/'|| the_operator == '%')
    cout<<"\nResult = "<<result;
}
#include<iostream>
using namespace std;

float add(int a, int b)
{   return (a + b);     }
float subtract(int a, int b)
{   return (a - b);     }
float multiply(int a, int b)
{   return (a * b);     }
float divide(int a, int b)
{   return (a / b);     }

int main()
{   int operation, a, b;
    float result;
    char choice;
    cout<<"Press 'y' to start calculate: ";
    cin>>choice;
    while(choice == 'y')
    {   cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division";
        cout<<"\nEnter your choice: ";
        cin>>operation;
        cout<<"\nEnter two numbers(by space): ";
        cin>>a>>b;
        if(operation == 1)
        {
            result = add(a, b);
            cout<<"Result: "<<result<<endl;
        }
        else if(operation == 2)
        {
            result = subtract(a, b);
            cout<<"Result: "<<result<<endl;
        }
        else if(operation == 3)
        {
            result = multiply(a, b);
            cout<<"Result: "<<result<<endl;
        }        
        else if(operation == 4)
        {
            result = divide(a, b);
            cout<<"Result: "<<result<<endl;
        }
        else
            cout<<"\n<<Invalid operation>>"<<endl;
        cout<<"Do you want to continue?(y/n): ";
        cin>>choice;        }
}
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define TT 3.14159

int main (){
    int a, b, h, option;
    float result;
    cout<<"Enter the code for operation (1,2,3,4,5): ";
    cin>>option;

    switch (option){
    case 1:
        cout<<"Area of triangle."<<endl;
        cout<<"Enter the value for 'b': ";
        cin>>b;
        cout<<"Enter the value for 'h': ";
        cin>>h;
        
        result = 0.5 * b * h;
        break;
    case 2:
        cout<<"Area of rectangle."<<endl;
        cout<<"Enter the value for 'b': ";
        cin>>b;
        cout<<"Enter the value for 'h': ";
        cin>>h;
        result = b * h;
        break;
    case 3:
        cout<<"Area of eclipse."<<endl;
        cout<<"Enter the value for 'a': ";
        cin>>a;
        cout<<"Enter the value for 'b': ";
        cin>>b;
        result = TT * a * b;
        break;
    case 4:
        cout<<"Area of square."<<endl;
        cout<<"Enter the value for 'a': ";
        cin>>a;
        result = a * a;
        break;
    case 5:
        cout<<"Area of trapezoid."<<endl;
        cout<<"Enter the value for 'a': ";
        cin>>a;
        cout<<"Enter the value for 'b': ";
        cin>>b;
        cout<<"Enter the value for 'h': ";
        cin>>h;
        result = 0.5 * (a + b) * h;
        break;
    default:
        cout<<"Invalid number operation."<<endl;
        result = 0;
    }
    if (result != 0 ){
        cout<<fixed<<showpoint;
        cout << setprecision(2) <<"Result: "<< result <<endl;
    }
    return 0;
}
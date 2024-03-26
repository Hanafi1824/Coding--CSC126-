#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    float adultPrice, childrenPrice, totalPrice;
    int adult, children;
    string name;
    cout << "Welcome to the theme park. Please enter your name: ";
    getline(cin, name);
    cout<<"Enter how many adult want to enter the park: ";
    cin>>adult;
    cout<<"Enter how many children want to enter the park: ";
    cin>>children;

    adultPrice = adult * 55;
    childrenPrice = children * 35;
    totalPrice = adultPrice + childrenPrice;
    
    cout<<fixed<<showpoint;
    cout<<"Your total price is RM "<<setprecision(2)<<totalPrice;
    
    return 0;
}
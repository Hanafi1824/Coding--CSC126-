#include <iostream>
using namespace std;

int main()
{
    //declare variables
    float weight_kg;
    //input
    cout<<"Enter your weight in kg: ";
    cin>>weight_kg;

    //process
    float weight_pound = weight_kg * 2.2;
    
    //output
    cout<<"\nYour weight in pound is "<<weight_pound;

    return 0;
}
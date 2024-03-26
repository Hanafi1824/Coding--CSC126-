#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#define PI 3.14159

int main()
{
    float radius;
    string name; 
    
    cout<<"What is your name: ";
    getline(cin,name);
    cout<<"Welcome, "<<name;
    cout<<"\nEnter the radius of the sphere: ";
    cin>>radius;
    
    double volume = 4/3 * PI * pow(radius, 3);
    
    cout<<fixed<<showpoint;
    cout<<"\nVolume of the sphere is "<<setprecision(2)<<volume;
}
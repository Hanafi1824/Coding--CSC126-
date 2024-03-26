#include<iostream>
#include<math.h>
using namespace std;                 

#define PI 3.142
float sphereVol(float radius)
{   
    float v = 4 / 3 * PI * pow(radius, 3);
    return v;
}
int main()
{
    float r;
    cout<<"Enter the radius for the sphere: ";
    cin>>r;
    cout<<"Volume = "<<sphereVol(r);
}

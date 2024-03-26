#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main ()
{   
    float length, width, areaTriangle, radius;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the width: ";
    cin>>width;

    areaTriangle = (0.5 * length * width);
    radius = sqrt(2 * areaTriangle);

    cout<<fixed<<showpoint;
    cout<<"The radius is "<<radius<<setprecision(2)<<endl;

    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    double areaT, areaC, areaS, radius;

    cout<<"Enter the area of triangle: ";
    cin>>areaT;
    radius = sqrt(2 * areaT);
    areaC = 3.14 * radius * radius;
    areaS = areaC - 2 * areaT;
    cout<<"Shaded ara is "<<areaS;
}
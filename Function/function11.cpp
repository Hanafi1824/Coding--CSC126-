#include<iostream>
#include<math.h>
using namespace std;

float calcAreaCircle();
float calcAreaRectangle();
float calcAreaTriangle();
int main()
{   cout<<"SHAPE AREA CALCULATION"<<endl;
    cout<<"C - Circle"<<endl;
    cout<<"R - Rectangle"<<endl;
    cout<<"T - Triangle"<<endl;
    char code;
    cout<<"Please enter your choice: ";
    cin>>code;
    float area = 0;
    switch (code)
    {   case 'c':
        case 'C':
            area = calcAreaCircle();
        break;
        case 'r':
        case 'R':
            area = calcAreaRectangle();
        break;
        case 't':
        case 'T':
            area = calcAreaTriangle();
        break;
        default:
            cout<<"\n..Invalid code.."<<endl;
    }
    if (area > 0)
    cout<<"Area of your choice is "<<area<<endl;
}
float calcAreaCircle()
{   float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    return (3.142 * radius * radius);   }
float calcAreaRectangle()
{   float length, width;
    cout<<"Enter the length & width of the rectangle: ";
    cin>>length>>width;
    return (length * width);    }
float calcAreaTriangle()
{   float base, height;
    cout<<"Enter the height & base of the triangle: ";
    cin>>base>>height;
    return (height * base / 2);     }
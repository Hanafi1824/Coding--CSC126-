#include <iostream>
using namespace std;

int main()
{
    //declare variables
    float length, width;

    //input
    cout<<"Enter the length of rectangle: ";
    cin>>length;
    cout<<"Enter the width of rectangle: ";
    cin>>width;

    //process
    float perimeter = (length * 2) + (width * 2);
    float area = length * area;
    
    //output
    cout<<"\nThe perimeter of rectangle is "<<perimeter;
    cout<<"\nThe area of rectangle is  "<<area; 

    return 0;
}
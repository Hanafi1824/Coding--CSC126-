#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int mask_type;
    cout<<"1- Face mask 2 ply --> Rm0.20 per mask"<<endl;
    cout<<"2- Face mask 2 ply --> Rm0.50 per mask"<<endl;
    cout<<"Enter your choice: ";
    cin>>mask_type;

    int no_mask;
    cout<<"Enter the number of mask: ";
    cin>>no_mask;

    float price;
    if (mask_type == 1)
        price = no_mask * 0.2;
    else 
        price = no_mask * 0.5;

    cout<<fixed<<showpoint;
    cout<<"\nPlease pay RM "<<setprecision(2)<<price<<" for your masks."<<endl;
    cout<<"Thank you for buying."<<endl;
}
#include <iostream>
using namespace std;

int main()
{
    float averageWeek;
    string customerID;
    char Y, N, rated, preferred;
    int voucher;
    voucher = 0;
    cout<<"Enter your customer ID: ";
    cin>>customerID;
    cout<<"Enter average weekly purchased: ";
    cin>>averageWeek;
    cout<<"Is customer successfully rated a product?(Y/N): ";
    cin>>rated;
    cout<<"Is customer purchases made from Preferred sellers?(Y/N): ";
    cin>>preferred;

    if(averageWeek < 500)
        voucher = 0;
    else if(averageWeek >= 500 && averageWeek <= 1000)
    {
        if(rated == 'Y' && preferred == 'Y')
            voucher = 400;       
    }
    else
    {
        if(rated == 'Y')
            voucher = 900;
    }
    cout<<customerID<<""<<endl;
    cout<<"Average weekly purchase: RM "<<averageWeek<<endl;
    cout<<"Your voucher is "<<voucher<<endl;
    return 0;
}
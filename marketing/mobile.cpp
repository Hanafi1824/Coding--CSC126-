#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int mobile;
    float price;
    cout<<"Select mobile phone (1, 2, 3 or 4):";
    cin>>mobile;

    switch (mobile)
    {
    case 1:
        cout<<"APPLE iPhone 5S."<<endl;
        price = 2260;
        break;
    case 2:
        cout<<"Samsung Galaxy Note 3."<<endl;
        price = 2098;
        break;
    case 3:
        cout<<"Samsung Galaxy Note 2."<<endl;
        price = 1499;
        break;
    case 4:
        cout<<"LG Nexus 5 LTE."<<endl;
        price = 1579;
        break;
    default:
        cout<<"Sony Xperia Z Ultra."<<endl;
        price = 1419;
    }
    float priceAfterDiscount;
    priceAfterDiscount = price * 0.75;

    cout<<fixed<<showpoint;
    cout<<"Mobile phone selected."<<endl;
    cout<<"Price before discount: RM "<<setprecision(2)<<price<<endl;
    cout<<"Price after discount: RM "<<setprecision(2)<<priceAfterDiscount<<endl;

    return 0;
}
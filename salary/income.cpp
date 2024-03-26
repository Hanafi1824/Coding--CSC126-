#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    string name;
    float income, salesman;
    char itemcode;
    cout<<"Welcome, electrical salesman."<<endl;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"You will receive RM900 per month and commission from selling items."<<endl;
    cout<<"A(TV)\nB(HiFi Set)\nC(Microwave)\nD(Washing Machine)\nE(Refrigerator)"<<endl;
    cout<<"Enter your item code for item type you sale(A/B/C/D/E): ";
    cin>>itemcode;

    float commission;
    if (itemcode == 'A')
    {   cout<<"Your item type is TV."<<endl;
        commission = 0.05 * 900;
    }
    else if (itemcode == 'B')
    {   cout<<"Your item type is HiFi Set."<<endl;
        commission = 0.08 * 900;
    }
    else if (itemcode == 'C')
    {   cout<<"Your item type is Microwave."<<endl;
        commission = 0.1 * 900;
    }
    else if (itemcode == 'D')
    {   cout<<"Your item type is Washing Machine."<<endl;
        commission = 0.13 * 900;
    }
    else if (itemcode == 'E')
    {   cout<<"Your item type is Refrigerator."<<endl;
        commission = 0.15 * 900;
    }
    income = 900 + commission;
    cout<<fixed<<showpoint;
    cout<<""<<name<<", your total income is RM "<<setprecision(2)<<income<<endl;
    cout<<"Enjoy your day.";
}
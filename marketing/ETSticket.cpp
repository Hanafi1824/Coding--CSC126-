#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string ID;
    float adultP, childP, mealP, total, totalmeal, Atotal;
    int child, adult, Qmeal;
    char package, mealcombo;
    char choice = 'y';
    while(choice != 'n')
    {   
        cout<<"Enter the Passenger ID: ";
        cin>>ID;
        do
        {cout<<"Type of package: ";
        cout<<"\nETS Gold (G)";
        cout<<"\nETS Platinum (P)";
        cout<<"\nEnter the type of package(G/P): ";
        cin>>package;}
        while(package != 'G' && package != 'P');
        cout<<"Enter quantity of adult passengers: ";
        cin>>adult;
        cout<<"Enter quantity of child passengers: ";
        cin>>child;
        {if(package == 'G')
        {
            adultP = 59.00;
            childP = 34.00;
            total = (adult * adultP) + (child * childP);
        }
        else if(package == 'P')
        {
            adultP = 79.00;
            childP = 44.00;
            total = (adult * adultP) + (childP * child);
        }
        else
            cout<<"Invalid package code.";
        cout<<"Do you want to add on a meal combo (Y/N)?: ";
        cin>>mealcombo;}
        if(mealcombo == 'Y')
        {   cout<<"Enter the quantity of meal combo: ";
            cin>>Qmeal;
            mealP = 7.00;
            totalmeal = mealP * Qmeal;
        }
        Atotal = total + totalmeal;
        cout<<fixed<<showpoint;
        cout<<"\n-----------------------------------------------------";
        cout<<"\nETS TICKET INFORMATION - Butterworth to Kuala Lumpur";
        cout<<"\n-----------------------------------------------------"<<endl;
        cout<<"\nPASSENGER ID          : "<<ID<<endl;
        cout<<"\nNumber of Adult       : "<<adult;
        cout<<"\nNumber of Children    : "<<child<<endl;
        cout<<"\nTotal Ticket Price    : RM "<<setprecision(2)<<total;
        cout<<"\nMeal Combo Price      : RM "<<setprecision(2)<<totalmeal;
        cout<<"\nNet Ticket Price      : RM "<<setprecision(2)<<Atotal<<endl;
    cout<<"\nDo you want to continue (y/n)? ";
    cin>>choice;
    }   
}
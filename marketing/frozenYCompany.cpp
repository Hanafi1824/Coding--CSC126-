#include <iostream>
using namespace std;

int main()
{
    char Y, M, L, T;
    char status, day;
    cout << "Welcome to Frozen Yogurt Company." << endl;
    cout << "Enter Y if you have a membership: " << endl;
    cin >> status;
    cout << "Enter T if you want to buy on Tuesday: " << endl;
    cin >> day;

    float mainPrice, discount;
    char sizeCups;
    if (status == 'Y')
    {
        cout << "Membership." << endl;
        cout << "Enter the size of cup(M/L): " << endl;
        cin >> sizeCups;
        if (sizeCups == 'M')
        {
            cout << "The price is RM18." << endl;
            mainPrice = 18;
            if (day == 'T')
            {
                cout << "You get a special discount for 10%." << endl;
                discount = 0.1;
                cout<<"Final price: RM " << mainPrice - (mainPrice * discount) <<endl;
            }
        }
        else if (sizeCups == 'L')
        {
            cout << "The price is RM20." << endl;
            mainPrice = 20;
            if (day == 'T')
            {
                cout << "You get a special discount for 10%." << endl;
                discount = 0.1;
                cout<<"Final price: RM " << mainPrice - (mainPrice * discount) <<endl;

            }
        }
    }
    else
    {
        cout << "Non-membership" << endl;
        cout << "Enter the size of cup(M/L): " << endl;
        cin >> sizeCups;
        if (sizeCups == 'M')
        {
            cout << "The price is RM22." << endl;
            mainPrice = 22;
            if (day == 'T')
            {
                cout << "You get a special discount for 10%." << endl;
                discount = 0.1;
                cout<<"Final price: RM " << mainPrice - (mainPrice * discount) <<endl;

            }
        }
        else if (sizeCups == 'L')
        {
            cout << "The price is RM25." << endl;
            mainPrice = 25;
            if (day == 'T')
            {
                cout << "You get a special discount for 10%." << endl;
                discount = 0.1;
                cout<<"Final price: RM " << mainPrice - (mainPrice * discount) <<endl;
            }
        }
    }
}
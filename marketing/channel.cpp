#include <iostream>
using namespace std;

int main()
{
    string accNum;
    char code, R, B;
    float basicService, serviceFee, totalBill, billProcess, premiumChannel;
    cout << "Enter the customer's account number: " << endl;
    cin >> accNum;
    cout << "Enter the customer code(Resident(R)/Business(B)): " << endl;
    cin >> code;

    if (code == 'R')
    {   
        cout << "Amount of premium channel you have: " << endl;
        cin >> premiumChannel;
        billProcess = 4.50;
        serviceFee = 20.50;
        premiumChannel *= 7.50;
    }
    else if (code == 'B')
    {
        cout << "Amount of number of basic service connection you have: " << endl;
        cin >> premiumChannel;
        billProcess = 15.00;
        if (premiumChannel <= 10)
            basicService = 7.5 * premiumChannel;
        else
        {
            basicService = 75.00;
            int remainder = premiumChannel - 10;
            serviceFee = basicService + (remainder * 5.00);
        }
        premiumChannel *= 50.00;
    }

    totalBill = billProcess + serviceFee + premiumChannel;
    cout << accNum << ", your total bill is RM " << totalBill << endl;
}
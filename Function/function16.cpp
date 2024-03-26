#include <iostream>
using namespace std;

int calcPayment(int code, int time, int guest)
{
    float price, totalPay;
    int addPrice = 50 * guest;
    if (code == 1)
        price = 300;
    else if (code == 2)
        price = 550;
    else if (code == 3)
        price = 750;
    else
        cout << "Wrong package..";
    totalPay = (price * time) + addPrice;
    return totalPay;
}
float calcDiscount(float totalPay)
{
    float finalPay, discount;
    if (totalPay > 5000)
        discount = 0.8;
    else
        discount = 0.9;
    finalPay = totalPay * discount;
    return finalPay;
}
int main()
{
    int code, time, guest;
    int more100 = 0;
    float totalAll = 0;
    char choice = 'y';
    while (choice != 'n')
    {
        cout << "Damai Bayu Resort: " << endl;
        cout << "1 - Pearl (basic)                           - RM300 price/hour" << endl;
        cout << "2 - Ruby (sound effect)                     - RM550 price/hour" << endl;
        cout << "3 - Platinum - (sound and lighting effects) - RM750 price/hour" << endl;
        cout << "Enter your type of package(1,2,3): ";
        cin >> code;
        cout << "Enter the number of hours spent: ";
        cin >> time;
        cout << "Enter the number of guest: ";
        cin >> guest;
        if (guest > 100)
            more100++;
        float total = calcPayment(code, time, guest);
        float finalPrice = calcDiscount(total);
        cout << "Your final payment after discount is RM" << finalPrice << endl;
        cout << "Do you want to continue?(y/n): ";
        cin >> choice;
        totalAll += finalPrice;
    }
    cout << "Total number of customers who have more than 100 guests: " << more100 << endl;
    cout << "Total payment for all customers: RM" << totalAll << endl;
}
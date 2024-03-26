#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string status;
    float salary;
    cout << "Enter your status(married/single): ";
    cin >> status;
    cout << "Enter your salary: RM ";
    cin >> salary;
    int numChild;
    float tax;
    if (status == "married")
    {   cout << "Enter the number of child: ";
        cin >> numChild;
        if (numChild >= 5)
            tax = 0.02 * salary;
        if (numChild < 5)
            tax = 0.025 * salary;
    }
    if (status == "single")
        tax = 0.03 * salary;
    cout << "Your tax is RM " << tax << endl;
}
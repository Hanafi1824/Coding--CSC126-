#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    float price;
    char result[20];
    cout << "Enter your price: ";
    cin >> price;

    if (price >= 100 && price <= 500)
        strcpy(result, "AFFORDABLE");
    else
        strcpy(result, "VERY EXPENSIVE");

    cout << "The result is " << result << endl;
}
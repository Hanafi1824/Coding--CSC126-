#include <iostream>
using namespace std;
int main() 
{   int sum = 0;
    char i;
    cout << "Enter a number (Enter '=' to end): ";
    cin >> i;
    while (i != '=') {
        if (isdigit(i)) 
        {
            int number = i - '0';
            sum += number;
        } 
        else 
        {   cout << "Invalid input" << endl;    }
        cout << "Enter a number (Enter '=' to end): ";
        cin >> i;
    }
    cout << "The sum of integer are " << sum;
}
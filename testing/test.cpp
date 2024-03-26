#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    system("cls");

    if (number % 2 == 0)
        cout<<"Good Job";
    else
        cout<<"Nah, try again bro";
}
#include <iostream>
using namespace std;

int main()
{
    string answer = "Yes";
    int number, counter = 0, total = 0;
    while(answer == "Yes")
    {
        cout<<"Enter a number: ";
        cin>>number;
        cin.ignore();

        cout<<"Do you wish to continue?(Yes): ";
        getline(cin, answer);

        total += number;
        counter++;
    }
    cout<<"Total = "<<total<<endl;
    float average = (float) total / counter;
    cout<<"Average = "<<average<<endl;
}
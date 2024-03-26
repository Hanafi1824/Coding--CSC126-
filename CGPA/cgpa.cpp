#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    string program;
    float cgpa;
    cout << "Enter your program: ";
    cin >> program;
    cout << "Enter your CGPA: ";
    cin >> cgpa;

    for(auto& c: program){
        c = tolower(c);
    }
    float amount;
    if (program == "diploma" && cgpa < 3.00)
        amount = 5000;
    else if (program == "diploma" && cgpa >= 3.00)
        amount = 7000;
    else if (program == "bachelor" && cgpa < 3.3)
        amount = 6000;
    else if (program == "bachelor" && cgpa >= 3.3)
        amount = 10000;
    else
        cout<<"\nSorry, your program or CGPA is not in the list. ";
    cout << "The amount of your scholarship is RM "<<amount;
    cout<<"\nEnjoy your day.";
    return 0;
}
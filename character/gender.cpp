#include <iostream>
using namespace std;
int main()
{
    char gender;
    int counter = 1, countM, countF;
    countM = countF = 0;
    while(counter <= 10)
    {
        cout<<"Enter the gender "<<counter<<"(M/F): ";
        cin>>gender;
        gender = toupper(gender);
        if (gender == 'M')
            countM++;
        else if (gender == 'F')
            countF++;
        else
            cout<<"Invalid character."<<endl;
        counter++;
    }
    cout<<"No. of male employee is "<<countM<<endl;
    cout<<"No. of female employee is "<<countF<<endl;
}
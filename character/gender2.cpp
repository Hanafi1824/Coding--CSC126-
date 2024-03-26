#include<iostream>
using namespace std;                 
int main()
{
    char name[30];
    char gender, f, m, M;
    int totalM;
    int totalF = 0;
    for(int counter = 0; counter < 5; counter++)
    {
        cout<<"Name of the employee: ";
        cin>>ws;
        cin.getline(name, 30);
        cout<<"Gender of the employee (M / F): ";
        cin>>gender;
        if(gender == 'M')
            totalM++; 
        else if(gender == 'F')
            totalF++;
    }
    cout<<"Total male employees is "<<totalM<<endl;
    cout<<"Total female employees is "<<totalF<<endl;
}
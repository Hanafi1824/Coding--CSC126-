#include<iostream>
using namespace std;
#define size 30
int main()
{
//1) input 2 names
    string name1, name2;
    
    cout<<"Enter the first name: ";
    getline(cin, name1);
    cout<<"Enter the second name: ";
    getline(cin, name2);
//2) input 2 integer numbers to represent the age of the 2 individuals
    int age1, age2;
    cout<<"Enter the first age: ";
    cin>>age1;
    cout<<"Enter the second age: ";
    cin>>age2;
//3) determine who is older
cout<<endl;
    if (age1 > age2)
        cout<<name1<<" is older than "<<name2<<endl;
    else if (age2 > age1)
        cout<<name2<<" is older than "<<name1<<endl;
    else 
        cout<<name2<<" and "<<name1<<" are the same age."<<endl;
//4) determine whether the names entered are the same name or not.
//if the names are not the same, display the longer name.
cout<<endl;
    if (name1 == name2)
        cout<<"Both names are the same name."<<endl;
    else 
    {   if (name1.length() > name2.length())
            cout<<name1<<" is longer than "<<name2<<endl;
        else if (name2.length() > name1.length())
            cout<<name2<<" is longer than "<<name1<<endl;
        else
            cout<<"Both names are at the same length."<<endl;
    }
cout<<endl;
return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter the grade: ";
    cin>>grade;
    
    char grade_ = toupper(grade);
    cout<<grade_<<endl;
    switch (grade)
    {
case 'A':
case 'a':
    cout<<"\nYour score is between 90 to 100."<<endl;
    cout<<"Excellent."<<endl;
    break;
case 'B':
case 'b':
    cout<<"\nYour score is between 80 to 89."<<endl;
    cout<<"Good."<<endl;
    break;
case 'C': 
case 'c':
    cout<<"\nYour score is between 70 to 79."<<endl;
    cout<<"Fair."<<endl;
    break;
case 'D':
case 'd':
    cout<<"\nYour score is between 60 to 69."<<endl;
    cout<<"Work harder."<<endl;
    break;
case 'E': 
case 'e':
    cout<<"\nYour score is between 0 to 59."<<endl;
    cout<<"Poor."<<endl;
    break;
default:
    cout<<"Invalid grade."<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}
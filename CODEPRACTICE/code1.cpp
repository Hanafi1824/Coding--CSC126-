#include<iostream>
using namespace std;

int main()
{
    string faculty, computer, business, accounting;
    float totalC, totalB, totalA;
    float averageC, averageB, averageA;
    int student = 6;
    int contributeC, contributeB, contributeA;
    cout<<"Faculty: <Computer> <Business> <Accounting>"<<endl;
    for(int student = 1; student <= 6; student++)
    {
        cout<<"Enter your faculty: ";
        cin>>faculty;
        if(faculty == "computer")
    {
        cout<<"Enter the contribution for MAKNA: RM ";
        cin>>contributeC;
        totalC += contributeC;
    }
        else if(faculty == "business")
    {
        cout<<"Enter the contribution for MAKNA: RM ";
        cin>>contributeB;
        totalB += contributeB;
    }
        else if(faculty == "accounting")
    {
        cout<<"Enter the contribution for MAKNA: RM ";
        cin>>contributeA;
        totalA += contributeA;
    }
        else
        cout<<"Sorry, wrong faculty.";
    }
    averageC = totalC / student;
    averageB = totalB / student;
    averageA = totalA / student;
    cout<<"Falcuty  Total Amount of contribution  Number of contribution  Average "<<endl;
    cout<<"Computer      "<<"RM "<<totalC<<"                       RM "<<contributeC<<"                  RM "<<averageC<<endl;
    cout<<"Business      "<<"RM "<<totalB<<"                       RM "<<contributeB<<"                  RM "<<averageB<<endl;
    cout<<"Accounting    "<<"RM "<<totalA<<"                       RM "<<contributeA<<"                  RM "<<averageA;
}
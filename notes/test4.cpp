#include<iostream>
using namespace std;

int main()
{   
    int marks, student = 3, quiz = 2;
    string name;
    float totalM, totalA, average, allAverage;
    for(int student = 1; student <= 10; student++)
    {   
        cout<<"Enter your name: ";
        cin>>name;
        for(int quiz = 1; quiz <= 5; quiz++)
        {
            cout<<"Enter marks: ";
            cin>>marks;
            totalM += marks;
        }
        totalA += totalM; 
    }
    average = totalM / quiz;
    allAverage = totalM / student;
    cout<<""<<name<<", your average mark is "<<average<<endl;
    cout<<"Average for all student is "<<allAverage;
}
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int numStudent, numQuestion, student;
    int total;
    int over80 = 0;
    int totalMarks = 0;
    string name;
    cout<<"Enter the number of student: ";
    cin>>numStudent;
    cout<<"Enter the number of question in the exam: ";
    cin>>numQuestion;
    int* marks = new int[numQuestion];
    for(int student = 0; student < numStudent; student++)
    {
        total = 0;
        cout<<"\nEnter the name of the student: ";
        cin>>name;
        for(int question = 0; question < numQuestion; question++ )
        {
            cout<<"Enter the marks for question no. "<<question + 1<<": ";
            cin>>marks[numQuestion];
            total += marks[numQuestion];
        }
        if(total >= 80)
        {   over80++;
        }
        cout<<"Total marks for student named "<<name<<" is "<<total<<endl;
        totalMarks += total;
    }
    float averageMarks = totalMarks / (float)numStudent;
    cout<<"\nAverage marks for all student is "<<averageMarks<<endl;
    cout<<"No. of students with marks 80 and above is "<<over80<<endl;
}
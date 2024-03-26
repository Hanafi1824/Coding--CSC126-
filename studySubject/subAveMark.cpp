#include <iostream>
using namespace std;
int main ()
{
    string name_subject, name_student;
    float marks, average, total;
    for(int subject = 1; subject <= 4; subject++)//outer loop
    {   cout<<"Enter the name of the subject:";
        getline(cin, name_subject);
        total = 0;
        for(int student = 1; student <=3; student++)//inner loop
        {   cout<<"Enter the name of the student: "<<student<<" :";
            getline(cin, name_student);
            cout<<"Enter the marks for the particular student: ";
            cin>>marks;
            cin.ignore();

            total += marks;
        }
        average = total / 3;
        cout<<"Average marks for "<<name_subject<<" is "<<average<<endl;
    }
}
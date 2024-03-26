#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int program, semester;
    float cgpa, income;
    cout<<"1- Diploma Public University"<<endl;
    cout<<"2- Bachelor Public University"<<endl;
    cout<<"3- Diploma Private University"<<endl;
    cout<<"4- Bachelor Private University"<<endl;
    cout<<"Enter your type of study (1,2,3,4): ";
    cin>>program;
    cout<<"Enter your semester: ";
    cin>>semester;
    cout<<"Enter your CGPA: ";
    cin>>cgpa;
    cout<<"Enter your parent income: RM ";
    cin>>income;

    float amount;
    float diploma, bachelor;
    if ((program == 1 || program == 3) && cgpa > 3.30 && income <= 50000){
        cout<<"You are qualified for scholarship as diploma student.";
        if (program == 1)
            amount = 2000;
        if (program == 3)
            amount = 3000;  
    }
    else if ((program == 2 || program == 4)  && cgpa > 3.0 && income <= 50000){
        cout<<"You are qualified for scholarship as bachelor student.";
        if (program == 2)
            amount = 3500;
        if (program == 4)
            amount = 4500;
    }
    else{
        cout<<"Sorry, you are not qualified for the scholarship.";
    }
    float totalAmount;
    totalAmount = amount * (semester - 1);
    
    cout<<fixed<<showpoint;
    cout<<"\nYour total amount for scholarship is RM "<<setprecision(2)<<totalAmount<<endl;
    cout<<"Enjoy your day."<<endl;

    return 0;
}
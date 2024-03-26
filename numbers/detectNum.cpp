#include<iostream>
using namespace std;

int main()
{
    int countD = 0;
    int smallest = 9999;
    for(int num = 0; num <= 9999; num++)
    {
        cout<<"Enter your number(enter 9999 to stop): ";
        cin>>num;
        if(num % 6 == 0 && num % 10 == 0)
            countD++; 
            if (num < smallest)
                smallest = num;
    }
    cout<<"\nYour numbers that can be divisible by 6 = "<<countD<<endl; 
    cout<<smallest<<", is your smallest number."<<endl;
}
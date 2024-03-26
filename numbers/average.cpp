#include<iostream>
using namespace std;
int main()
{
    int no_input, number;
    cout<<"How many numbers do you wish to enter: ";
    cin>>no_input;

    int smallest = 9999;
    int largest = -9999;
    int countE = 0;
    int countO = 0;
    int total = 0;
    for(int counter = 1; counter <= no_input; counter++)
    {
        cout<<"Enter number "<<counter<<": ";
        cin>>number;

        if(number > largest)
            largest = number; 
        if(number < smallest)
            smallest = number;

        if(number % 2 == 0)
            countE++;
        else
            countO++;
        
        total += number;
    }
    cout<<"\nThe largest number is "<<largest<<endl;
    cout<<"The smallest number is "<<smallest<<endl;
    
    cout<<"\nNo. of even numbers = "<<countE<<endl;
    cout<<"No. of odd numbers = "<<countO<<endl;

    cout<<"\nTotal of all numbers = "<<total;

    float average = total / (float) no_input;
    cout<<"\nAverage of all number = "<<average;

}
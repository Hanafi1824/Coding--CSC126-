#include<iostream>
using namespace std;
int main()
{
    int no_input, number;
    cout<<"Enter any number(enter -1 to stop): ";
    cin>>no_input;
    int countE = 0, countO = 0, counter = 1;
    while(counter != -1)
    {   
        cout<<"Enter number "<<": ";
        cin>>number;
        if(number % 2 == 0)
            countE++;
        else
            countO++;
        counter++;
        cout<<"Do you wish to stop(enter -1): ";
        cin>>counter;
    }
    cout<<"\nNo. of even numbers = "<<countE<<endl;
    cout<<"No. of odd numbers = "<<countO<<endl;
}
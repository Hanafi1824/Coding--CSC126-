#include<iostream>
using namespace std;
int main()
{
    int number;
    char choice;
    do{
        cout<<"Enter the number: ";
        cin>>number;

        cout<<"Press Y to input another number: ";
        cin>>choice;

    }while(choice == 'Y' );
    
    
}
#include <iostream>
using namespace std;

int main()
{
    int total = 0, quantity, price;
    char customer = 'Y';
    while(customer == 'Y')
    {
        cout<<"Enter the quantity: ";
        cin>>quantity;
        cout<<"Enter the price: RM ";
        cin>>price;
        
        total += price * quantity;
        cout<<"Current total price for this customer is Rm "<< price * quantity <<endl;

        cout<<"Continue for another customer?(Y/N) "<<endl;
        cin>>customer;
    }
    cout<<"Total for all customer is Rm "<<total<<endl;
}
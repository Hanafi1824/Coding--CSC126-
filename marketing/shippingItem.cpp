#include <iostream>
using namespace std;

int main()
{
    int quantityITEMSinventory;
    int itemsUNITbox;
    string name1, name2;
    
    cout<<"Enter your item name: ";
    getline(cin,name1);
    cout<<"\nEnter the quantity of the items in inventory: ";
    cin>>quantityITEMSinventory;
    cout<<"\nEnter the items unit that can be packed in a box: ";
    cin>>itemsUNITbox;
    
    int numOFbox = quantityITEMSinventory / itemsUNITbox;
    
    cout<<"\nYour item name is "<<name1;
    cout<<"\nThe quantity of the items in the inventory";
    cout<<"\nnQuantity of the left over is "<<quantityITEMSinventory % itemsUNITbox;

    return 0;
}
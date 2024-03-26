#include <iostream>
#include <string>
using namespace std;

int main ()
{   
    string itemName;
    int itemQuantity, ItemBox;
    const char separator = ' ';
    const int nameWidth = 6;
    const int numWidth = 8;
    
    cout<<"Enter the name of the item: ";
    getline(cin, itemName);
    
    cout<<"Enter the quantity of the item: ";
    cin>>itemQuantity;
    
    cout<<"Enter the number of item that can be fit into 1 box: ";
    cin>>ItemBox;
    
    int numOfBox = itemQuantity / ItemBox;
    
    cout<<"\nItem's name: "<<itemName<<endl;
    cout<<"Item's quantity: "<<itemQuantity<<endl;
    cout<<"Item's fit in 1 box: "<<ItemBox<<endl;
    cout<<"Number of boxes needed: "<<numOfBox<<endl;
    cout<<"Number of items left over: "<<itemQuantity % ItemBox<<endl;
    
    return 0;

}
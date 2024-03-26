#include <iostream>
using namespace std;

int main ()
{
     float price;
     int quantity;
     cout<<"Enter the quantity purchased: ";
     cin>>quantity;
     
     if (quantity >= 5)
      price = quantity * 5;
     
     else 
      price = quantity * 7;
     
     cout<<"Please pay RM "<<price<<endl;    
}
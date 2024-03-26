#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    char code;
    cout<<"Enter the item code: ";
    cin>>code;
    
    float price, rate;
    if (code == 'A' || code == 'a')
    {   price = 54;
        rate = 0.05;
    }
    else if (code == 'B' || code == 'b')
    {   price = 65;
        rate = 0.05;
    }
    else if (code == 'C' || code == 'c')
    {   price = 82;
        rate = 0.05;
    }  
    else if (code == 'D' || code == 'd')
    {   price = 103;
        rate = 0.07;
    }  
    else if (code == 'E' || code == 'e')
    {   price = 150;
        rate = 0.07;
    }  
    else if (code == 'F' || code == 'f')
    {   price = 245;
        rate = 0.1;
    }  
    else if (code == 'G' || code == 'g')
    {   price = 250;
        rate = 0.1;
    }  
    else
    {   cout<<"\nError, this items is not in the list.";
        return 1;
    }
    float charge = price * rate;
    float payment = price * charge;
    cout<<"\nTotal payment is RM"<<payment;
}
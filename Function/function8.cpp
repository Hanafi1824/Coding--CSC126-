#include<iostream>
using namespace std;

float calcPrice(float price, float quantity)
{   return (price * quantity);  }
float calcDiscount(float price, int quantity)
{   float totalP = calcPrice(price, quantity);
    return totalP = totalP - (totalP * 0.5);    }
float calcTax(float price, int quantity)
{   float tax;
    float totalP = calcPrice(price, quantity);
    return totalP + (totalP * (tax / 100));     }
int main()
{
    float price, totalP, tax;
    int quantity;
    cout<<"Enter the price for item:RM ";
    cin>>price;
    cout<<"Enter the item quantity: ";
    cin>>quantity;
    cout<<"Enter the tax rate: ";
    cin>>tax;

    cout<<"Your total price is RM "<<calcPrice(price, quantity)<<endl;
    cout<<"Your total price after discount: RM "<<calcDiscount(price, quantity)<<endl;
    cout<<"Your total price after tax: RM "<<calcTax(price, quantity)<<endl;
}

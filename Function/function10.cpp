#include<iostream>
#include<string.h>
using namespace std;

float mangoType(string typeM)
{
    float price_kg;
    if(typeM == "harum manis")
        price_kg = 30;
    if(typeM == "sala")
        price_kg = 10.50;
    if(typeM == "susu")
        price_kg = 8.50;
    return price_kg;
}
float calcPrice(float price, float weight)
{   return (weight * price);    }
float calcFinalPrice(float price, string status)
{
    float finalPrice;
    if (status == "staff" && price > 100)
    {   finalPrice = 0.75 * price;     }
    else
    {   finalPrice = price;     }
    return finalPrice;
}
void print(float final)
{   cout<<"Please pay Rm"<<final<<endl;     } 
int main()
{
    float weight;
    string mango_type, status;
    cout<<"Enter the mango type: ";
    getline(cin, mango_type);
    cout<<"Enter the weight of the mangoes: ";
    cin>>weight;
    cin.ignore();
    cout<<"Enter (staff) if you are a staff: ";
    getline(cin, status);

    float p_kg = mangoType(mango_type);
    float tp = calcPrice(p_kg, weight);
    float fp = calcFinalPrice(tp, status);
    print(fp);
}
#include <iostream>

using namespace std;

int main(){
    
    string drinks = "coffee";
    float price = 2.50;
    int cupsOfCoffee = 10;
    float totalPrice = price * cupsOfCoffee;
    
    cout << "You have ordered 4 cups of coffee and t you RM10.00" << endl;
    cout << "\nYou have ordered " << cupsOfCoffee << " cups of coffee and cost you RM" << totalPrice;
    
    return 0;
}
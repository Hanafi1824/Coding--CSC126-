#include<iostream> //Line 1 
using namespace std; //Line 2 
 int one; //Line 3 
void defFunction(int&, double, char); //Line 4 
 int main()//Line 5 
{ //Line 6 
    int x = 3; //Line 7     
    double y = 5.5; //Line 8     
    char z = 'H'; //Line 9 
     defFunction(x, y, z); //Line 10     
    cout<<endl; //Line 11 
    defFunction(x, y-3.5, 'S'); //Line 12 
} //Line 13 
 void defFunction(int& first, double second, char ch) //Line 14 
{ //Line 15 
     cout<<first<<endl; //Line 16      
     cout<<second<<endl; //Line 17      
     cout<<ch<<endl; //Line 18 
} //Line 19 
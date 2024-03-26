#include<iostream>
using namespace std;
int main()
{
    int counter = 25;
    int sum = 0;
    do{
        if(counter % 2 == 1)
        {cout<<counter<<" ";
         sum += counter;
        }
        counter--;
    }while(counter >= 10);
    cout<<"\nSum ="<<sum;
    
}
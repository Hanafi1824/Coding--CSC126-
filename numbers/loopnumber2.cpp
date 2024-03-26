#include<iostream>
using namespace std;
int main()
{
    int counter = 50;
    while(counter <= 100)
    {
        if(counter % 2 == 1)
            cout<<counter<<" ";
        counter++;
    }

}
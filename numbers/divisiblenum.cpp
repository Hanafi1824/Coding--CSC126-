#include<iostream>
using namespace std;
int main()
{
    int countD = 0;
    for(int counter = 0; counter <= 100; counter++)
    {
        if(counter % 2 == 0 && counter % 5 == 0)
            countD++;
    }
    
    cout<<"\nCount of numbers divisible by 2 & 5 = "<<countD; 
}
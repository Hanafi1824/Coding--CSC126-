#include<iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    for(int index = 4; index > -1; index--)
    {   cout<<numbers[index]<<" ";      }
    int sum = 0;
    int max = numbers[0];
    int indexMax;
    for(int index = 0; index < 5; index++)
    {
        sum += numbers[index];
        if(max <= numbers[index])
        {   max = numbers[index];       }
    }
    cout<<"\nSum = "<<sum<<endl;
    cout<<"The largest number in array = "<<max<<endl;
}
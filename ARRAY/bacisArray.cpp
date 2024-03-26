#include<iostream>
using namespace std;

int main()
{
    int number = 4;
    int numbers[5] = {2, 3, 4, 5, 6};

    cout<<number<<endl;
    cout<<numbers[2]<<endl;

    cin>>number;
    cin>>numbers[4];

    for(int index = 0; index < 5; index++)
    {
        cout<<numbers[index]<<endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int  column;
    for(int row = 5; row >= 1; row--)
    {
        for(int column = 1; column <= row; column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
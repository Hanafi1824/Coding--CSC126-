#include <iostream>
using namespace std;

int main()
{
    int  column;
    string symbol;
    for(int row = 1; row <= 5; row++)
    {
        if(row % 2 == 1)
            symbol = "#####";
        else
            symbol = "@@@@@";
        cout<<symbol<<endl;
    }
}
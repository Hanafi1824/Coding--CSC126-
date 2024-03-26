#include<iostream>
using namespace std;                 

int main()
{   
    int countD = 0;
    int countA = 0;
    int countO = 0;
    char input;
    for(int counter = 0; counter < 10; counter++)
    {
        cout<<"Enter a symbol: ";
        cin>>input;
        if (isdigit(input))
            countD++;
        else if (isalpha(input))
            countA++;
        else
            countO++;
    }
    cout<<"No. of digits = "<<countD<<endl;
    cout<<"No. of alphabets = "<<countA<<endl;
    cout<<"No. of symbols = "<<countD<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    char myArray[13] = {'i', 'n', 't', 'e', 'r', 'n', 'a', 't', 'i','o', 'n', 'a', 'l'};
    char symbol = '*';
    int alphabetCount = 0;
    int index;
    for(int index = 0; index < 13; index++)
    {
        if (myArray[index] == 'a' || myArray[index] == 'e' || myArray[index] == 'i' || myArray[index] == 'o' || myArray[index] == 'u') 
        {
            alphabetCount++;
        }
        cout<<myArray[index]<<" ";
    }
    cout<<"\nVowels alphabet count: "<<alphabetCount<< endl;
    for (int index = 0; index < 13; index++)
    {
        if (myArray[index] >= 'q' && myArray[index] <= 'z')
        {
            myArray[index] = symbol;
        }
        cout<<myArray[index]<< " ";
    }
    cout<<endl;
}
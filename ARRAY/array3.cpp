#include<iostream>
using namespace std;
int main()
{
    int anArray[] = {32, 987, 65, 43, 908, 1234, 543, 76, 21, 8};
    int num1, num2;
    cout<<"The initial content of the array: ";
    for(int index = 0; index < 10; index++)
    {   cout<<anArray[index]<<" ";      }
    cout<<endl;
    cout<<"Enter the number to be replaced: ";
    cin>>num1;
    cout<<"Enter the new number: ";
    cin>>num2;
    for(int index = 0; index < 10; index++)
    {
        if(num1 == anArray[index])//search
        {   anArray[index] = num2;      }
    }
    cout<<"\nThe latest content of the array: ";
    for(int index = 0; index < 10; index++)
    {   cout<<anArray[index]<<" ";      }
    cout<<endl;
}
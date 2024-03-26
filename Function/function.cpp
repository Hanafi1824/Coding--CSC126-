#include<iostream>
using namespace std;
//function definition
int findMax(int n, int m) //received
{   int max;
    if (n > m)
        max = n;
    else
        max = m;
    return max; }//pass
int findMin(int x, int y) //received
{   int min;
    if (x < y)
        min = x;
    else
        min = y;
    return min; }//pass
int findTotal(int, int); //function prototype
void findAverage(int); //function prototype                            
int main()
{   int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    //function call statement
    cout<<"\nThe largest number is "<<findMax(num1, num2)<<endl;
    cout<<"\nThe smallest number is "<<findMin(num1, num2)<<endl;
    int total = findTotal(num1, num2);
    cout<<"\nThe total of the 2 numbers is "<<total<<endl;
    findAverage(total); }
int findTotal(int n1, int n2)
{   return (n1 + n2); }
void findAverage(int t)
{   float average = t / 2.0;
    cout<<"\nThe average of the 2 numbers is "<<average<<endl; }

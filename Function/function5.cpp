#include<iostream>
using namespace std;

int findSquare(int num)
{   return num * num;   }
int main()
{
    for (int x = 1; x <= 50; x++)
    {
        cout<<x<<"^2 = "<<findSquare(x)<<endl;
    }
}
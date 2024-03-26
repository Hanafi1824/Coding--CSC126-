#include <iostream>
using namespace std;

int duplicateA(int a)
{   return (a = 2);     }
int duplicateB(int b)
{   int a = 2;
    return (b = a + 4);     }
int duplicateC(int c)
{   int a = 2;
    int b = a + 4;
    return (c = b + 20);    }
int main()
{
    int x = 1;
    int y = 3;
    int z = 7;
    cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    cout<<"x="<<duplicateA(x)<<",y="<<duplicateB(y)<<",z="<<duplicateC(z)<<endl;
}
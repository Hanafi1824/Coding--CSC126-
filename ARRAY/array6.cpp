#include <iostream>
using namespace std;

int main() {
    double alpha[50];
    for (int i = 0; i < 25; i++) 
    {   alpha[i] = i * i;       }

    for (int i = 25; i < 50; i++) 
    {   alpha[i] = 3 * i;       }
    
    for (int i = 0; i < 50; i++) 
    {
        cout<<alpha[i]<< " ";
        if ((i + 1) % 10 == 0) 
        {   cout<<endl;       }
    }
}

#include <iostream>
using namespace std;
int main()
{
    int heightBunny = 0;
    int max = -9999;
    int min = 9999;
    int mid = 0;
    int i = 0;
    int bunny[3];
    int maxNum, minNum, midNum;
    while (i < 3)
    {
        cout<<"Enter bunny height for no. "<<i+1<<" : ";
        cin>>bunny[i];
        i++;
    }
    int j = 0;
    while (j < 3)
    {
        if (bunny[j] > max)
        {
            max = bunny[j];
            maxNum = j + 1;
        }
        else if (bunny[j] < min)
        {
            min = bunny[j];
            minNum = j + 1;
        }
        else if (bunny[j] > min && bunny[j] < max)
        {
            mid = bunny[j];
            midNum = j + 1;
        }
        j++;
    }
    cout<<"Bunny no. "<<maxNum<<" is the tallest";
    cout<<"\nBunny no. "<<midNum<<" is shorter than bunny no. "<<maxNum<<" but taller than bunny no. "<<minNum;
    cout<<"\nBunny no. "<<minNum<<" is the shortest";
}
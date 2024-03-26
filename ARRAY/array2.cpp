#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int cars[10];
    //loop for input
    for(int index = 0; index < 10; index++)
    {
        cout<<"Enter the no. of cars sold by saleperson no. "<<index+1<<": ";
        cin>>cars[index];
    }
    //loop for data manipulation
    int total = 0;
    int min = cars[0]; //step1 & 2: declare & intialize
    int indexMin;
    for(int index = 0; index < 10; index++)
    {
        total += cars[index];
        if(min >= cars[index])//step3: compare
        {
            min = cars[index];//step4: update
            indexMin = index + 1;
        }
    }
    cout<<"Total car sold that month = "<<total<<endl;
    cout<<"Average of cars sold per saleperson = "<<ceil(total/10)<<endl;
    cout<<"The minimum car sold by saleperson = "<<min<<endl;
    cout<<"The minimum car sold by saleperson with ID no. = "<<indexMin<<endl;
}
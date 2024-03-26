#include<iostream>
using namespace std;
float calcTest(float partA, float partB) 
{ 
    return ((partA + partB) * 0.15); 
} 
int result(float totalTest) 
{ 
    if(totalTest >= 50) 
    cout<<"\nYou have passed."; 
    else 
    cout<<"\nYou failed."; 
    return totalTest;
} 
int main()
{
    int a, b;
    float totalTest;
    cout<<"Enter the marks for part A: ";
    cin>>a;
    cout<<"Enter the marks for part B: ";
    cin>>b;

    totalTest = calcTest(a, b);
    result(totalTest);
}
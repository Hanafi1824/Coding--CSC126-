#include <iostream>
using namespace std;
void rainfallCategory(float rain[], int size)
{
    int light = 0;
    int moderate = 0;
    int heavy = 0;
    int violant = 0;
    for(int index = 0; index < 7; index++)
    {
        if(rain[index] < 2.5)
            light++;
        if(rain[index] >= 2.5 && rain[index] <= 10)
            moderate++;
        if(rain[index] > 10 && rain[index] < 50)
            heavy++;
        if(rain[index] > 50)
            violant++;
    }
    cout<<endl<<"Light rain = "<<light<<endl;
    cout<<endl<<"Moderate rain = "<<moderate<<endl;
    cout<<endl<<"Heavy rain = "<<heavy<<endl;
    cout<<endl<<"Violant rain = "<<violant<<endl;
}
int main ()
{
    float intensity[] = {76, 1.25, 43, 32, 9.87, 2.45, 5.21}; 
    rainfallCategory(intensity, 7);   
}
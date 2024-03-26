#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int index;
    int january[10];
    cout<<"<<<<< Entering the data for sales in January >>>>>"<<endl;
    for(int index = 0; index < 10; index++)
    {   cout<<"Enter the number of cars sold by salesperson with ID no. "<<index+1<<" :";
        cin>>january[index];    
    }
    int max1 = january[0]; 
    int indexMax1;
    for(int index = 0; index < 10; index++)
    {   if(january[index] >= max1)
        {   max1 = january[index];
            indexMax1 = index + 1;      }       
    }
    cout<<"\n"<<endl<<"<<<<< Entering the data for sales in February >>>>>"<<endl;
    int february[10];
    for(int index = 0; index < 10; index++)
    {   cout<<"Enter the number of cars sold by salesperson with ID no. "<<index+1<<" :";
        cin>>february[index];       
    }
    int max2 = february[0]; 
    int indexMax2;
    for(int index = 0; index < 10; index++)
    {   if(february[index] >= max2)
        {   max2 = february[index];
            indexMax2 = index + 1;      }       
    }
    cout<<"\n"<<endl<<"<<<<< Entering the data for sales in March >>>>>"<<endl;
    int march[10];
    for(int index = 0; index < 10; index++)
    {   cout<<"Enter the number of cars sold by salesperson with ID no. "<<index+1<<" :";
        cin>>march[index];          }
    int max3 = march[0]; 
    int indexMax3;
    for(int index = 0; index < 10; index++)
    {   if(march[index] >= max3)
        {   max3 = march[index];
            indexMax3 = index + 1;      }       }
    cout<<"\n"<<endl<<"<<<<< Displaying the data for array totalSales >>>>>"<<endl;
    int totalSales[] = {14, 18, 14, 20, 14, 29, 24, 17, 9, 10};
    int max4 = totalSales[0]; 
    int maxSeller = 0;
    for(int index = 0; index < 10; index++)
    {   totalSales[index] = january[index] + february[index] + march[index];
        if(totalSales[index] > max4)
        {   max4 = totalSales[index];
            maxSeller = index + 1;      }
        cout<<totalSales[index]<<" ";           }
    int indexMax4;
    int maxTotalSell = 0;
    for(int index = 0; index < 10; index++)
    {   if(totalSales[index] >= maxTotalSell)
        {   maxTotalSell = totalSales[index];
            indexMax4 = index + 1;      }       }
    cout<<endl<<"\n(a)The maximum sales made in January is "<<max1<<""<<" by saleperson with ID no. "<<indexMax1<<endl;
    cout<<"(b)The maximum sales made in February is "<<max2<<""<<" by saleperson with ID no. "<<indexMax2<<endl;
    cout<<"(c)The maximum sales made in March is "<<max3<<""<<" by saleperson with ID no. "<<indexMax3<<endl;
    cout<<"(d)The best salesperson is salesperson with ID no. "<<maxSeller<<endl;
    cout<<"(e)The maximum sales from total sales is "<<max4<<""<<" from saleperson with ID no. "<<indexMax4<<endl;
    if(max4 == maxTotalSell)
        cout<<"(f)Yes. The same person.";
    else
        cout<<"(f)No. Not the same person.";
}
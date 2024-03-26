#include <iostream> 
#include <math.h> 
#include <iomanip> 
using namespace std; 

int main () 
{ 
   cout<<"sqrt (3.45) = "<<sqrt(3.45)<<endl;
   
   int x1, x2;
   cout<<endl<<"Enter 2 numbers seperated by space: ";
   cin>>x1>>x2;
   
   cout<<"sqrt("<<x1<<" - "<<x2<<") = "<<sqrt(x1-x2)<<endl;
   
   cout<<fixed<<showpoint;
   cout<<"sin (90) = "<<setprecision(2)<<sin(90)<<endl;
   
   int x, y;
   cout<<endl<<"Enter 2 numbers seperated by space: ";
   cin>>x>>y;
   
   int r1 = pow(x,2);
   int r2 = pow(y,2);
   int r3 = r1 - r2;
   
   cout<<"abs("<<r1<<" - "<<r2<<") = "<<abs(r3)<<endl;
   
}
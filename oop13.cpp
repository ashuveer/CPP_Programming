//Default constroctor 
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle
{
    private: 
           float l,w,a;
    public:
           Rectangle() //defining the default constroctor 
          {
            l=0;
            w=0;
            a=0;
          }
          void read()
         {
            cout<<"Enter the length of rectangle:\n";
            cin>>l;
            cout<<"Enter the width of rectangle:\n";
            cin>>w;
            
         }  
         void computearea()
         {
        
            a=l*w;
        }      
         void print()
         {
            cout<<"Length of rectangle="<<l;
            cout<<"\nWidth of rectangle="<<w;
            cout<<"\nArea of rectangle="<<a;
         }
};
int main()
{
    Rectangle D;
    D.read();
    D.computearea();
    D.print();
    return 0;
}
          
         

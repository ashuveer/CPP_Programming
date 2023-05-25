//Write a program on static data member % member function 
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<string.h>
using namespace std;
class IT
{
          int no;
          
    public:
        static int count;
         void inp();
         void disp();
IT()
{
count++;
}
//void IT::getval(int X)
void inp()
{   cout<<"nu"<<no;
cin>>no;
   // no=X;
   // {
//cout<<"Number"<<no<<endl;
//count++;
}
 
//void IT::displaycount(void)
void disp()
{
    cout<<"counter->"<<count<<endl;
}};
int IT::count=0;
int main()
{
    IT obj1,obj2,obj3;
    obj1.inp();
    obj2.inp();
    obj3.inp();
    obj1.disp();
    obj2.disp();
    obj3.disp();
    return 0;
    
}

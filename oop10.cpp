//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
class math 
{ 
   int a,b;
   public:
         void input()
         {
          cout <<"Enter the value of a & b\n";
          cin>>a>>b;
         }
   friend void add(math obj);
};
void add(math obj)
{
   int c;
   c= obj.a + obj.b;
   cout<<"c="<<c<<endl;
}
int main()
{ 
   math obj1;
   obj1.input();
   add(obj1);
   return 0 ;
}
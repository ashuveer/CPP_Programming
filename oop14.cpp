//copy constroctor
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
class math
{
    int x;
    public:
           math()
           {

           }
           math(int b)
           {
            x=b;
           }
           math(math &a)
           {
            x=a.x;
           }
           void display()
           {
            cout<<x;
           }
};
int main()
{
    math a(25);
    math b(a);
    math c=a;
    math d;
    d=a;
    cout<<"object a value of x:";
    a.display();
    cout<<"\nobject a value of x:";
    b.display();
    cout<<"\nobject a value of x:";
    c.display();
    cout<<"\nobject a value of x:";
    d.display();
    return 0;
}
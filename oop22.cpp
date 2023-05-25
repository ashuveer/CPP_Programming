//Write a program, Virtual function class.(late binding:- virtual key define in base class and output/display= derived class content)
// early bindig:- virual key define in derived class and output/display=base class content.
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A
{
    public:
    virtual void display()
    {
        cout<<"Content of Base Class";

    }
};
class B: public A
{
    public:
   void display()
    {
        cout<<"Content of derived class";

    }
};
int main()
{
    A *b;
    B d;
    b=&d;
    b->display();
    return 0;
}
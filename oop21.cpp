//Write a program, Virtual function class.
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A 
{
    public:
    virtual void show()
    {
        cout<<"Hello";
    }
};
class B: public A
{
    public:
    void show()
    {
        cout<<"\nHello derived class";
    }
};
int main()
{
    A aobj;
    B bobj;
    A *bptr;
    bptr=& aobj;
    bptr->show();
    bptr=& bobj;
    bptr->show();
    return 0;
}
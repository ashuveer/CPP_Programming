//Write a program, Hybrid inheritance.
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class B
{
    public:
    void show()
    {
        cout<<"Base class B"<<endl;

    }
};
class C: public B
{
    public:
    void show()
    {
        cout<<"Derived class"<<endl;
    }
};
class A
{
    public:
    void show()
    {
        cout<<"Base class A"<<endl;
    }
};
class D: public C,public A
{
    public:
    void show()
    {
        cout<<"Derived class"<<endl;

    }
};
int main()
{
    B objB;
    C objC;
    A objA;
    D objD;
    objB.show();
    objC.show();
    objA.show();
    objD.show();
    return 0;
}

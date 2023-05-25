//Write a program, Multipath Inheritance
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A 
{
    public:
    void show()
    {
        cout<<"Base class A"<<endl;

    }
};
class B: public A
{
    public:
    void show()
    {
        cout<<"Derived class B"<<endl;

    }
};
class C: public A
{
    public:
    void show()
    {
        cout<<"Derived class C"<<endl;
    }
};
class D: public C, public B
{
public:
void show()
{
cout<<"Derived class D"<<endl;
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
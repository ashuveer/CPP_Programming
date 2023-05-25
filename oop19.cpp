//Hierarchical
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A
{
    public:
       void showA()
       {
        cout<<"Base class A"<<endl;
       }
};
class B: public A
{
    public:
     void showB()
     {
        cout<<"Derived class B"<<endl;
     }
};
class C: public A
{
    public:
     void showC()
     {
        cout<<"Derived class C"<<endl;
     }
};
class D: public A
{
    public:
    void showD()
    {
        cout<<"Derived class D"<<endl;
    }
};
int main()
{
    A objA;
    B objB;
    C objC;
    D objD;
    objA.showA();
    objB.showB();
    objC.showC();
    objD.showD();
    return 0;
}

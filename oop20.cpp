//Write a program, Virtual Base Class
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void dispA()
  {
    a=10;
    cout<<"class A="<<a<<endl;
  }
};
class B: public virtual A 
{
     int b;
     public: 
     void dispB()
     {
        b=20;
        cout<<"class B="<<b<<endl;
     }
};
class C:public virtual A
{
    int c;
    public:
    void dispC()
    {
        c=30;
        cout<<"class C="<<c<<endl;

    }
};
class D: public B, public C
{
    int d;
    public:
    void dispD()
    {
        d=40;
        cout<<"class D="<<d<<endl;
    }
};
int main()
{
    D obj;
    obj.dispA();
    obj.dispB();
    obj.dispC();
    obj.dispD();
}
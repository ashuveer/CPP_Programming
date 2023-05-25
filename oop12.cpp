//program, Friend function 
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
class xyz;
class abc
{
    int a;
    public:
          void getdata(int i)
    {
        a=i;
    }
    friend void max(abc,xyz);
};
void max(abc a1 ,xyz x1)
{
    if(a1.a<=x1.x)
    cout<<" A is greater=";
    else
    cout<<" X is greater=";
}
class oop12
{
private:
    /* data */
public:
    oop12(/* args */);
    ~oop12();
};

oop12::oop12(/* args */)
{
}

oop12::~oop12()
{
}
 xyz
{
    int x;
    public: void getdata(int j)
    {
        x=j;
    }
    friend void max(abc,xyz);
};
int main()
{
    abc a1;
    a1.getdata(5);
    xyz x1;
    x1.getdata(6);
    max(a1,x1);
    return 0;
}

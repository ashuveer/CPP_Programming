//program to print sum of two integer value using class
//Written By: Mr. Ashutosh Kumar 
#include<iostream>
#include<conio.h>
using namespace std;
class addition
{
    public:
           void sum(int a,int b)
    {
        cout<<"a+b="<<a+b<<endl;
    }
           void sum(int a, int b, int c)
    {
        cout<<"a+b+c="<<a+b+c<<endl;
    }
};
int main()
{
    addition obj;
    obj.sum(10,20);
    obj.sum(10,20,30);
    getch();
    return 0;
}
//program to addition of two numbers using function overloading
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
void sum(int,int);
float sum(float, float);
int main()
{
    int x,y,z;
    float i=2.2,j=3.5,k;
    x=10;
    y=20;
    sum(x,y);
   k=sum(i,j);
    cout<<"the sum is "<<k<<endl;
    getch();
    return 0;
}
void sum(int x, int y)
{
    int sum;
    sum=x+y;
    cout<<"sum is "<<sum<<"\n";
}
float sum(float i, float j)
{
    float k;
    k=i+j;
    return k;
}
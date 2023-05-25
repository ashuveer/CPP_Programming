//program to sum of two integer value using inline function
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
inline int sum(int a, int b)
{
    return(a+b);
}
int main()
{
    int x=10;
    int y=20;
    cout<<"sum="<<sum(x,y);
    return 0;
}
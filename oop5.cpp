//program for print integer value using pointer 
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=5;
    int *i=&j;   
    cout<<"Address of &i= "<<&i<<"\n";
    cout<<"Addresss of j= "<<j<<"\n";
    cout<<"Address of &j= "<<&j<<"\n";
    cout<<"Value of i= "<<i<<"\n";
    cout<<"Value of j= "<<j<<"\n";
    cout<<"value of *(&i)= "<<*(&i)<<"\n";
    return 0;
    }
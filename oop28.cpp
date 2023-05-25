//Exception Handling
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,R;
    cout<<"Enter the a & b values ";
    cin>>a>>b;
    R=(a/b);
    {
    cout<<"Result"<<R<<endl;
    }
try
{
    if(b==0)
    {
        throw(b);
    }
    R=(a/b);
}
catch( int x )
{
    cout<<"Exception is occured"<<x<<endl;
    cout<<"Please enter another value";
}
return 0;
}

//Exception Handling 
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    int i;
    i=a>b?0:1;
    try
    
        {
            if(i==0)
        {
            cout<<"sub(a-b)"<<a-b<<endl;
        }   
        else
        {
            throw(i);
        }
        }
        catch (int j)
       { cout<<"Exception caught i= "<<i<<endl;
       }
    return 0;
}
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
int main()
{
    try
    {
        {
            throw 25;
        }
    }
    catch( int e)
    {
        cout<<"Exveption occured "<<e<<endl;
    }
    return 0;
    
}
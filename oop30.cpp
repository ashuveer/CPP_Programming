//Exception Handling
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
int main()
{
    int answer, divisor, divident;
        try
        {
            divisor=1;
            divident=0;
            if(divident==0)
            throw 0;
            answer=divisor/divident;
            cout<<answer<<endl;
             return 0;
        }
        catch( int i )
        {
         cout<<"you cannot divide by zero ";
        }
}
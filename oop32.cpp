//Template example
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
template<class T>
T sum(T a, T b)
{
    cout<<"sum="<<a+b<<endl;
}
int main()
{
    sum(2,5);
    sum(3.5,3.6);
    sum(5.666,6.555);
    return 0;
}
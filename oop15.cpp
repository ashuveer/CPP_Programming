//parameter constroctor4
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
    int m,n;
    public:
          integer(int,int);//constructor decleared
          void display(void)
          {
            cout<<"m="<<m<<endl;
            cout<<"n="<<n<<endl;

          }
};
integer::integer(int x, int y)
   {
    m=x;
    n=y;
   }
    int main()
    { 
        integer int1(3,5);
        integer int2=integer(2,4);
        cout<<"odd number"<<endl;
        int1.display();
        cout<<"even number"<<endl;
        int2.display();
        return 0;

    }


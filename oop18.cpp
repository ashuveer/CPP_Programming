//Multiple
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A 
{
    protected:
    int x;
    public:
    void show()
    {
    cout<<"x="<<x<<endl;
    }
};
class B
{
    protected:
    int y;
    public: void showB(){
    cout<<"y="<<y<<endl;
}};
class C: public A, public B
{
 private:
 int z;
  public : void setdata(int i, int j, int k)
 {
    x=i;
    y=j;
    z=k;
 }   
 void showC()
 {
cout<<"z ="<<z<<endl;
 }};
 int main()
 {
    C objC;
    objC.setdata(5,10,15);
    objC.show();
    objC.showB();
    objC.showC();
    return 0;
 }

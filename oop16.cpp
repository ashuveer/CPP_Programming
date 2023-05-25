//Single Inheritance
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A
{  
    protected:
          char name[10];
          int age;

} ;
class B: public A
{
    private:
       int weight;
    public:
     void getdata()
     {
        cout<<"Enter name,age,weight"<<endl;
        cin>>name>>age>>weight;
     }
     void showdata()
     {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
        cout<<"weight :"<<weight<<endl;
     }
};
int main()
{
    B obj;
    obj.getdata();
    obj.showdata();
    return 0;

}
 
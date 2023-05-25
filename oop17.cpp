//Multilevel inheritance
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class A 
{
    protected:
    char name[10];
    int age;

};
class B: public A 
{
    protected:
    int weight;
};
class C: public B 
{
   private:
   int height;
   public:
   void getdata(void)
   {
    cout<<"Enter name,age,weight,height\n";
    cin>>name>>age>>weight>>height;
   }
   void showdata()
   {
    cout<<"Name: "<<name<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"weight :"<<weight<<endl;
    cout<<"Height :"<<height<<endl;
   }
};
int main()
{
    C obj;
    obj.getdata();
    obj.showdata();
    return 0;
}
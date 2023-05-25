//program for employee data(Id, contact number & salary)
//Written By: Mr. Ashutosh Kumar
#include<iostream>
using namespace std;
class Emp
{
    private:
           int id,cont;
           float sal;
           char n[5];
    public:
          void get();
          void display();
};
void Emp::get()
{ 
    cout<<"Enter Employee Name:\n";
    cin>>n;
    cout<<"Enter Employee Id:\n";
    cin>>id;
    cout<<"Enter Employee Contact Number:\n";
    cin>>cont;
    cout<<"Enter Employee Salary:\n";
    cin>>sal;
}
void Emp::display()
{ 
    cout<<n<<"\n";
    cout<<id<<"\n";
    cout<<cont<<"\n";
    cout<<sal<<"\n";
}
int main()
{
    Emp E1[3];
    for ( int i=0;i<=3;i++)
    E1[i].get();
    for( int i=0;i<=3;i++)
    E1[3].display();
    return 0; 
}
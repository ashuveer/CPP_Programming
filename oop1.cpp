//program for student data
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    private:
           int id;
           char sname[10];
    public:
           void get();
           void display();
};
void student::get()
{ 
    cout<<"Enter student name\n";
    cin>>sname;
    cout<<"Enter student id\n";
    cin>>id;
}
void student::display()
{ 
    cout<<sname<<"\n";
    cout<<id<<"\n";
}
int main()
{ 
    student s1;
    s1.get();
    s1.display();
    ;
}

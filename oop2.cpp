//program for student data(age,registration number,ID)
//Written By: Mr. Ashutosh Kumar
#include<iostream>
#include<conio.h>
using namespace std;
class student
{ 
    private:
           int age,reg,id;
           char sname[20],sex[4];
    public:
           void get();
           void display();
};
void student::get()
{ 
    cout<<"Enter student name\n";
    cin>>sname;
    cout<<"Enter age\n";
    cin>>age;
    cout<<"Enter registration Number\n";
    cin>>reg;
    cout<<"Enter Id number\n ";
    cin>>id;
}
void student::display()
{ 
    cout<<sname<<endl;
    cout<<age<<endl;
    cout<<reg<<endl;
    cout<<id<<endl;
}
int main()
{ 
    student s1[1];
    int i;
    for(i=0;i<=1;i++)
    s1[i].get();
    for(i=0;i<=1;i++)
    s1[i].display();
    return 0; 
}
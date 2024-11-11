#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}
void Employee::setname(string n){
    if(n.length()<2){
        name="John Doe";
    }
    else
        name=n;
}
void Employee::setdob(int d, int m, int y){
    if(2024-y<18){
        day=1;
        mon=1;
        year=2002;
    }
    else
        day=d;
        mon=m;
        year=y;
}
void Employee::setsalary(double s){
    if(s<10000 && s>100000){
        salary=10000;
    }
    else
        salary=s;
}
void Employee::setinfo(){
    string n;
    int d,m,y;
    double s;
    cout<<"Enter name: ";
    cin>>n;
    setname(n);
    cout<<"Enter age: ";
    cin>>d>>m>>y;
    setdob(d,m,y);
    cout<<"Enter salary: ";
    cin>>s;
    setsalary(s);

}
void Employee::getinfo(Employee x){
    string n;
    int d,m,y;
    double s;
    cout<<"Name: "<<x.getname(n)<<endl;
    cout<<"Date of birth: "<<x.getdob(d)<<x.getdob2(m)<<x.getdob3(y)<<endl;
    cout<<"Salary: "<<x.getsalary(s)<<endl;
}

const compareage(Employee e){

}

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
string Employee::getname(){
    return name;
}
int Employee::getdob()const{
    return day;
}
int Employee::getmob()const{
    return mon;
}
int Employee::getyob()const{
    return year;
}
double Employee::getsalary(){
    return salary;
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
void Employee::getinfo(){
    cout<<"Name: "<<getname()<<endl;
    cout<<"Date of birth: "<<getdob()<<"/"<<getmob()<<"/"<<getyob()<<endl;
    cout<<"Salary: "<<getsalary()<<endl;
}
Employee Employee::compareage(const Employee& e)const{
    if(year<e.year){
        return *this;
    }
    else if(year>e.year){
        return e;
    }
    else{
        if(mon<e.mon){
            return *this;
        }
        else if(mon>e.mon){
            return e;
        }
        else{
            if(day<e.day){
                return *this;
            }
            else if(day>e.day){
                return e;
            }
        }
    }

}

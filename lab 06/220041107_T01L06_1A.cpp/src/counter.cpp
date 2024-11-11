#include<iostream>
#include "counter.h"
using namespace std;

counter::counter():count(0), incrementstep(1){};
counter::counter(int step_val):count(0)
{
    if(step_val>0){
        incrementstep=step_val;
    }
    else
        incrementstep=1;
}

counter::~counter()
{
    //dtor
}
void counter::setincrementstep(int step_val){
    if(count==0){
        if(step_val>0){
            incrementstep=step_val;
        }
        else
            cout<<"Negative value"<<endl;
    }
    else
        cout<<"cannot set the increment step"<<endl;
}

int counter::getcount()const{
    return count;
}

void counter::increment(){
    count+=incrementstep;
}

void counter::resetcount(int step){
    count=0;
    setincrementstep(step);
}

counter counter::operator+(counter p){
    counter tmp;
    if(incrementstep==p.incrementstep){
        tmp.count=count+p.count;
        tmp.incrementstep=incrementstep;
    }
    else
        cout<<"cannot add"<<endl;
    return tmp;
}

counter counter::operator+=(counter p){
    if(incrementstep==p.incrementstep){
        count+=p.count;
    }
    else
        cout<<"cannot add"<<endl;
    return *this;
}

bool counter::operator==(counter p)const{
    return count==p.count;
}

bool counter::operator!=(counter p)const{
    return count!=p.count;
}

bool counter::operator>(counter p)const{
    return count>p.count;
}

bool counter::operator<(counter p)const{
    return count<p.count;
}

bool counter::operator>=(counter p)const{
    return count>=p.count;
}

bool counter::operator<=(counter p)const{
    return count<=p.count;
}

counter counter::operator++(int){
    counter tmp=*this;
    increment();
    return tmp;
}
counter counter::operator++(){
    increment();
    return *this;
}
void testfunction(const counter& c){
    cout<<c.getcount()<<endl;
}



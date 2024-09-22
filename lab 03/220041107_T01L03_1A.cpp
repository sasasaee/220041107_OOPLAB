#include<iostream>
using namespace std;

class counter{
private:
    int count;
    int inc_step;

public:
    counter(): count(0), inc_step(1){}          //constructor

    void setIncrementStep(int s){
        inc_step=s;
    }
    int getCount(){
        return count;
    }
    void increment(){
        count+=inc_step;
    }
    void resetcount(){
        count=0;
    }
};

int main(){
    counter c;                      //c is an object of class counter

    c.setIncrementStep(2);
    c.increment();
    cout<<c.getCount()<<endl;
    c.increment();
    cout<<c.getCount()<<endl;
    c.resetcount();
    cout<<c.getCount()<<endl;
}

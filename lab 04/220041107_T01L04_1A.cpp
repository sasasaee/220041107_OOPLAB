#include<iostream>
using namespace std;

class calculator{
private:
    int currentstatus;

    int getcurrenttatus(){
        return currentstatus;
    }
    int setcurrentstatus(int s){
        currentstatus=s;
    }
public:
    calculator(){
        currentstatus=0;
    }
    calculator(int cal){
        currentstatus=cal;
    }
    void add(int v){
        currentstatus+=v;
    }
    void subtract(int v){
        currentstatus-=v;
    }
    void multiply(int v){
        currentstatus*=v;
    }
    int divideby(int v){
        if(v==0){
            cout<<"invalid"<<endl;
        }
        else{
            //int rem=currentstatus%v;
            currentstatus=currentstatus/v;
            //return rem;
        }
    }
    void clear(){
        currentstatus=0;
    }
    void display(){
        cout<<"Calculator display: "<<currentstatus<<endl;
    }

    ~calculator(){

        cout<<currentstatus<<endl<<"Destructor of the Calculator object is called."<<endl;
    }

};

int main(){
    calculator c1;
    c1.add(10);
    c1.display();
    c1.add(7);
    c1.display();
    c1.multiply(31);
    c1.display();
    c1.subtract(42);
    c1.display();
    c1.divideby(7);
    c1.display();
    c1.divideby(0);
    c1.display();
    c1.add(3);
    c1.display();
    c1.clear();
    c1.display();
}

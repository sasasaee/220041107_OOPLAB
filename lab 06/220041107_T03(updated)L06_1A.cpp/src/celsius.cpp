#include<iostream>
#include "celsius.h"
#include "fahrenheit.h"
#include "kelvin.h"

using namespace std;

celsius::celsius():temperature(0.0){}
celsius::celsius(double temp)
{
    assign(temp);
}

celsius::~celsius()
{
    //dtor
}
void celsius::assign(double t){
    if(t<-273.15){
        cout<<"Invalid"<<endl;
    }
    temperature=t;

}

void celsius::display()const{
    cout<<"The temperature is "<<temperature<<" celsius"<<endl;
}

celsius::operator fahrenheit(){
    return fahrenheit(temperature*9/5+32);
}
celsius::operator kelvin(){
    return kelvin(temperature+273.15);
}

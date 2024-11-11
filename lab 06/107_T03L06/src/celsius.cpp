#include<iostream>
#include "celsius.h"
#include "fahrenheit.h"

using namespace std;

celsius::celsius()
{

}

celsius::~celsius()
{
    //dtor
}
void celsius::assign(double t){
    if(t<-273.5){
        cout<<"Invalid"<<endl;
    }
    temperature=t;

}

void celsius::display(){
    cout<<"The temperature is "<<temperature<<" celsius";
}

celsius::operator fahrenheit(){
    return temperature*9/5+32;
}
celsius::operator kelvin(){
    return temperature+273.15;
}





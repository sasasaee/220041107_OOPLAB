#include "kelvin.h"
#include<iostream>
using namespace std;

kelvin::kelvin()
{
    //ctor
}

kelvin::~kelvin()
{
    //dtor
}

void kelvin::assign(double t){
    if(t<0){
        cout<<"invalid"<<endl;
    }
    temperature=t;
}

void kelvin::display(){
    cout<<"The temperature is "<<temperature<<" kelvin";
}

kelvin::operator celsius(){
    return temperature-273.15; ;
}
kelvin::operator fahrenheit(){
    return (temperature*9/5+32)-273.15;
}




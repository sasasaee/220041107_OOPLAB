#include "kelvin.h"
#include<iostream>
#include "celsius.h"
#include "fahrenheit.h"

using namespace std;

kelvin::kelvin():temperature(0.0){}
kelvin::kelvin(double temp)
{
    assign(temp);
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

void kelvin::display()const{
    cout<<"The temperature is "<<temperature<<" kelvin"<<endl;
}

kelvin::operator celsius(){
    return celsius(temperature-273.15);
}
kelvin::operator fahrenheit(){
    return fahrenheit((temperature-273.15)*9.0/5.0+32.0);
}

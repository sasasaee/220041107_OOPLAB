#include "fahrenheit.h"
#include "kelvin.h"
#include "celsius.h"
#include<iostream>
using namespace std;
fahrenheit::fahrenheit():temperature(0.0){}
fahrenheit::fahrenheit(double temp)
{
    assign(temp);
}

fahrenheit::~fahrenheit()
{
    //dtor
}

void fahrenheit::assign(double t){
    if(t<-459.67){
        cout<<"invalid"<<endl;
    }
    temperature=t;
}

void fahrenheit::display()const{
    cout<<"The temperature is "<<temperature<<" fahrenheit"<<endl;
}

fahrenheit::operator celsius(){
    return celsius((temperature-32)*5/9);
}
fahrenheit::operator kelvin(){
    return kelvin(((temperature-32)*5/9)+273.15);
}



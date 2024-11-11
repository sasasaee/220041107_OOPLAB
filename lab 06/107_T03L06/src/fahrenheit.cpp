#include "fahrenheit.h"
#include<iostream>
using namespace std;
fahrenheit::fahrenheit()
{
    //ctor
}

fahrenheit::~fahrenheit()
{
    //dtor
}

void fahrenheit::assign(double t){
    if(t<496.15){
        cout<<"invalid"<<endl;
    }
    temperature=t;
}

void fahrenheit::display(){
    cout<<"The temperature is "<<temperature<<" fahrenheit";
}

fahrenheit::operator celsius(){
    return (temperature-32)*5/9;
}
fahrenheit::operator kelvin(){
    return ((temperature-32)*5/9)+273.15;
}


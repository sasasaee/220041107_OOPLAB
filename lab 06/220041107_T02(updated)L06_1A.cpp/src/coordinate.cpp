#include "coordinate.h"
#include<cmath>
#include<iostream>

using namespace std;

coordinate::coordinate():x(0),y(0){}
coordinate::coordinate(float xaxis, float yaxis){
    x=xaxis;
    y=yaxis;
}


coordinate::~coordinate()
{
    //dtor
}
void coordinate::move_x(float val){
    x+=val;
}

void coordinate::move_y(float val){
    y+=val;
}

void coordinate::move(float x_val, float y_val){
    x+=x_val;
    y+=y_val;
}

float coordinate::operator-(const coordinate& c)const{
    return sqrt((x-c.x)*(x-c.x)+(y-c.y)*(y-c.y));
}

float coordinate::getdistance()const{
    return sqrt(x*x+y*y);
}

bool coordinate::operator>(const coordinate& c)const{
    return getdistance()>c.getdistance();
}

bool coordinate::operator<(const coordinate& c)const{
    return getdistance()<c.getdistance();
}

bool coordinate::operator>=(const coordinate& c)const{
    return getdistance()>=c.getdistance();
}

bool coordinate::operator<=(const coordinate& c)const{
    return getdistance()<=c.getdistance();
}

bool coordinate::operator==(const coordinate& c)const{
    return getdistance()==c.getdistance();
}

bool coordinate::operator!=(const coordinate& c)const{
    return getdistance()!=c.getdistance();
}

void coordinate::display(){
    cout<<"Coordinate: (" << x << ", " << y << ")" <<endl;
}

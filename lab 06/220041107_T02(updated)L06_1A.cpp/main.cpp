#include <iostream>
#include <cstdlib>
#include <ctime>
#include "coordinate.h"
using namespace std;

void randomassignment(coordinate c[], int s){
    for(int i=0;i<s;i++){
        float x_val=static_cast<float>(rand()%100-50);
        float y_val=static_cast<float>(rand()%100-50);
        c[i]=coordinate(x_val,y_val);
    }
}
void highest(coordinate c[], int s){
    int max=0;
    for(int i=0;i<s;i++){
        if(c[i].getdistance()>c[max].getdistance()){
            max=i;
        }
     }
     cout<<"maximum: "<<endl;
     c[max].display();
}
void lowest(coordinate c[], int s){
    int min=0;
    for(int i=0;i<s;i++){
        if(c[i].getdistance()<c[min].getdistance()){
            min=i;
        }
     }
     cout<<"minimum: "<<endl;
     c[min].display();
}

int main()
{
   srand(static_cast<float>(time(0)));
   int n=10;
   coordinate coord[n];
   randomassignment(coord,n);
   highest(coord,n);
   lowest(coord,n);
}

#include <iostream>
#include "celsius.h"
#include "fahrenheit.h"
#include "kelvin.h"


using namespace std;

int main()
{
    celsius c1(100);
    c1.display();

    fahrenheit f1=c1;
    f1.display();

    kelvin k1=c1;
    k1.display();

    f1.assign(212);
    c1=f1;
    c1.display();

    k1=f1;
    k1.display();
}

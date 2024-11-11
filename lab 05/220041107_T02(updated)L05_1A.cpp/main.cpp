#include <iostream>
#include<string>
#include "Employee.h"

using namespace std;

int main()
{
    Employee e1,e2;
    cout << "Enter information for Employee 1: " << endl;
    e1.setinfo();

    cout << "\nEnter information for Employee 2: " << endl;
    e2.setinfo();

    cout << "information for Employee 1: " << endl;
    e1.getinfo();
    cout << "information for Employee 2: " << endl;
    e2.getinfo();

    Employee elder=e1.compareage(e2);

    if(&elder==&e1){
         cout<<"Employee 1 is older than Employee 2."<<endl;
    }
    else if(&elder==&e2){
        cout<<"Employee 2 is older than Employee 1."<<endl;
    }
    else{
        cout<<"Both employees have the same date of birth."<<endl;
    }
}

#include <iostream>
#include<string>
#include "Employee.h"


using namespace std;

int main()
{
   Employee e1,e2;

   cout<<"Employee 1"<<endl;
   e1.setinfo();
   e1.getinfo();

   cout<<"Employee 2"<<endl;
   e2.setinfo();
   e2.getinfo();
}

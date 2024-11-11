#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;

class Employee
{
    public:
        Employee();
        ~Employee();

        string getname();
        void setname(string n);

        int getdob()const;
        int getmob()const;
        int getyob()const;
        void setdob(int d, int m, int y);

        double getsalary();
        void setsalary(double s);

        Employee compareage(const Employee& e)const;

        void setinfo();
        void getinfo();


    protected:

    private:
        string name;
        int day,mon,year;
        double salary;
};


#endif // EMPLOYEE_H

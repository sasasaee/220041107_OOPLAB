#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;

class Employee
{
    public:
        Employee();
        ~Employee();

        string getname(){
            return name;
        }
        void setname(string n);
        int getdob(){
            return day;
        }
        int getdob2(){
            return mon;
        }
        int getdob3(){
            return year;
        }
        void setdob(int d, int m, int y);
        double getsalary(){
            return salary;
        }
        void setsalary(double s);
        const compareage(Employee e){
        }
        //void getinfo();
        void setinfo();


    protected:

    private:
        string name;
        int day,mon,year;
        double salary;
};

#endif // EMPLOYEE_H

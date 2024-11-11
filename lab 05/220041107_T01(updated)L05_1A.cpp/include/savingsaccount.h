#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
using namespace std;


class savingsaccount
{
    public:
        savingsaccount();
        ~savingsaccount();

        void getname();
        void setname(string n);

        string getaddress();
        void setaddress(string a);

        double getannualinterestrate();
        void setannualinterestrate(double i);

        double getcurrentbalance();
        void setcurrentbalance(double c);

        double calculateinterest(int periodinmonths);
        void disburseinterest(int periodinmonths);
        void deposite(double amount);
        void withdraw(double amount);



    protected:

    private:
        string name;
        string address;
        double annualinterestrate;
        double currentbalance;
};

#endif // SAVINGSACCOUNT_H

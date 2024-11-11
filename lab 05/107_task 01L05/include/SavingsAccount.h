#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H


class SavingsAccount
{
    public:
        SavingsAccount();
        ~SavingsAccount();
        string getname(){
            return name;
        }
        void setname(string n){
            name=n;
        }
        string getaddress(){
            return address;
        }
        void setaddress(string a){
            address=a;
        }
        double getannualinterestrate(){
            return annualinterestrate;
        }
        void setannualinterestrate(double i){
            annualinterestrate=i;
        }
        double getcurrentbalance(){
            return currentbalance;
        }
        void setcurrentbalance(double c){
            currentbalance=c;
        }
        double calculateinterest(int periodinmonths){
            return annualinterestrate
        }
        void disburseinterest(int periodinmonths){
        }



    protected:

    private:
        string name;
        string address;
        double annualinterestrate;
        double currentbalance, minbalance;
};
void editinformationbykeyboard(SavingsAccount a);
void generateinformationrandom(SavingsAccount b);
void showinterestall(SavingsAccount ar[]);
void showallalphabetically(SavingsAccount ar[]);

#endif // SAVINGSACCOUNT_H

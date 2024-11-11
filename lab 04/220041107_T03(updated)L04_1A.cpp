#include<iostream>
using namespace std;

class bankaccount{
private:
    int acc_num;
    string acc_name;
    string acc_typ;
    double cur_balance;
    int min_balance;
    static int totacc, tottax, totactacc;


public:
    bankaccount(int an, string hn, string t, double cb, double mb){
        acc_num=an;
        acc_name=hn;
        cur_balance=cb;
        min_balance=mb;
        acc_typ=t;

        totacc++;
        totactacc++;

    }
    void showinfo()const{
        cout<<"Account number: "<<acc_num<<", Holder: " <<acc_name<<
        ", Type: " << acc_typ<< ", Balance: BDT " <<cur_balance
             << ", Min Balance: BDT " <<min_balance<< endl;
    }
    void deposite(double amount){
        if(amount>0){
            cur_balance+=amount;
            cout<<"Deposited: "<<amount<<endl;
        }
        else
            cout<<"Invalid deposit amount!"<<endl;
    }
    void showbalance(){
        cout<<cur_balance<<endl;
    }
    void withdraw(double amount){
        if(amount<min_balance){
            cout<<"Cannot withdraw"<<endl;
        }
        else
            cur_balance-=amount;
    }
    void giveinterest(double intrate){
        double interest= (cur_balance*intrate)/100;
        double tax= interest*0.10;
        cur_balance+=(interest-tax);
        tottax+=tax;
    }
    static void displaystates(){
        cout<<"Total Accounts Created: "<<totacc<<endl;
        cout<<"Active account: "<<totactacc<<endl;
        cout<<"Total Source Tax Collected: BDT "<<tottax<<endl;
    }
    static bankaccount larger(bankaccount& a, bankaccount& b){
        if(a.cur_balance>b.cur_balance)
            return a;
        else
            return b;
    }
    ~bankaccount(){
        totactacc--;
        cout<<"Account of "<<acc_name<<" with account no: "<<acc_num
        <<" is destroyed with a balance BDT "<<cur_balance<<endl;
    }
};


int bankaccount::totacc=0;
int bankaccount::totactacc=0;
int bankaccount::tottax=0;

int main(){
    bankaccount ac1(01, "Zennie", "savings", 5000, 1000);
    bankaccount ac2(02, "Bob", "current", 7000, 1500);

    ac1.showinfo();
    ac2.showinfo();

    ac1.deposite(2000);
    ac1.withdraw(2000);
    ac1.giveinterest(3.0);

    bankaccount::displaystates();           //static member func. call
    bankaccount lar= bankaccount::larger(ac1,ac2);
    cout<<"Account with larger balance: ";
    lar.showinfo();

    return 0;
}

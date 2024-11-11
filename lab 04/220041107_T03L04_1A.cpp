#include<iostream>
using namespace std;

class bankaccount{
private:
    int accountnum;
    string accountholdername;
    string accountype;
    int currentbalance;
    int minbalance;
public:
    bankaccount(){}
    bankaccount(int a, string hn, string atyp, int cb, int mb){
        accountnum=a;
        accountholdername=hn;
        accountype=atyp;
        currentbalance=cb;
        minbalance=mb;
    }
    void bankinfo(){
        cout<<"Account number: "<<accountnum<<endl;
        cout<<"Account holder name: "<<accountholdername<<endl;
        cout<<"Current balance: "<<currentbalance<<endl;
        cout<<"Minimum balance: "<<minbalance<<endl;
    }
    void showbalance(){
        cout<<"Current balance: "<<currentbalance<<endl;
    }
    void deposite(int d){
        currentbalance+=d;
    }
    void withdraw(int w){
        if(w<minbalance){
            cout<<"Cannot withdraw"<<endl;
        }
        else
            currentbalance-=w;
    }
    void giveinterest(int per=3){
        int interest= currentbalance*(per/100);
        int tax=interest*0.1;
        currentbalance=currentbalance+(interest-tax);
    }


};


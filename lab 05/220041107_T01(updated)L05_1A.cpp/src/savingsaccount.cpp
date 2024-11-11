#include<iostream>
#include<string>
#include "savingsaccount.h"
using namespace std;

savingsaccount::savingsaccount(): annualinterestrate(0.0), currentbalance(0.0)
{
    //ctor
}

savingsaccount::~savingsaccount()
{
    //dtor
}
void savingsaccount::getname(){
}
void savingsaccount::setname(string n){
    name=n;
}
string savingsaccount::getaddress(){
    return address;
}
void savingsaccount::setaddress(string a){
    address=a;
}
double savingsaccount::getannualinterestrate(){
    return annualinterestrate;
}
void savingsaccount::setannualinterestrate(double i){
    annualinterestrate=i;
}
double savingsaccount::getcurrentbalance(){
    return currentbalance;
}
void savingsaccount::setcurrentbalance(double c){
    currentbalance=c;
}
double savingsaccount::calculateinterest(int periodinmonths){
    return(currentbalance*(annualinterestrate/100)/12)*periodinmonths;
}
void savingsaccount::disburseinterest(int periodinmonths){
    double interest=calculateinterest(periodinmonths);
    currentbalance+=interest;
    cout<<"disbursed interest: "<<interest<<endl;
}
void savingsaccount::deposite(double amount){
    if(amount>0){
        currentbalance+=amount;
        cout<<"Deposited: "<<amount<<endl;
    }
    else
        cout<<"invalid amount"<<endl;
}
void savingsaccount::withdraw(double amount){
    if(amount>currentbalance){
        cout<<"invalid amount"<<endl;
    }
    else{
        currentbalance-=amount;
        cout<<"Withdrew: "<<amount<<endl;
    }

}

#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "savingsaccount.h"
using namespace std;

void editinfobykeyboard(savingsaccount ac){
    string name, address;
    double interestrate;

    cout << "Enter account name: ";
    getline(cin, name);
    ac.setname(name);

    cout << "Enter address: ";
    getline(cin, address);
    ac.setaddress(address);

    cout<<"Enter annual interest rate (2.0 to 4.0): ";
    cin>>interestrate;
    ac.setannualinterestrate(interestrate);

    cin.ignore();

}

void generateinforandomly(savingsaccount ac){
    string names[4]= {"La Lisa", "Anny Jane", "Tom Boy", "Kim Tae"};
    string addresses[4]={"123 Elm St", "456 Oak St", "789 Pine St", "101 Maple St"};

    ac.setname(names[rand()%4]);
    ac.setaddress(addresses[rand()%4]);

    double interestrate=2.0+(rand()%21)/10.0;
    ac.setannualinterestrate(interestrate);

    double balance=1000+(rand()%49001);
    ac.setcurrentbalance(balance);
}

void showinterestall(savingsaccount ac[], int s){
    for(int i=0; i<s; i++){
        double interest=ac[i].calculateinterest(12);
        cout <<"Account: "<<ac[i].getname()<< ", Interest: " <<interest<<endl;

        ac[i].disburseinterest(12);
    }
}
int main()
{
    srand(time(0));
    const int numaccount=3;
    savingsaccount acc[numaccount];

    for(int i=0;i<numaccount;i++){
        int c;
        cout<<"For account "<<i+1<<" press 1 to set info by keyboard or 2 for random"<<endl;
        cin>>c;
        cin.ignore();
        if(c==1){
            editinfobykeyboard(acc[i]);
        }
        else if(c==2){
            generateinforandomly(acc[i]);
        }
        else
            cout<<"invalid"<<endl;
    }
    showinterestall(acc,numaccount);
}

#include<iostream>
using namespace std;

class flight{
private:
    int flight_num;
    string destination;
    float distance;
    float maxfuelcap;
    double calfuel(){
        if(distance<=1000){
            return 500;
        }
        else if(distance>1000 && distance<=2000){
            return 1100;
        }
        else if(distance>2000){
            return 2200;
        }
        else
            cout<<"invalid"<<endl;
    }
public:
    int val=calfuel();
    void feedinfo(){
        cout<<"Enter flight number: "<<endl;
        cin>>flight_num;

        cout<<"Enter destination: "<<endl;
        cin>>destination;

        cout<<"Enter distance: "<<endl;
        cin>>distance;

        cout<<"Enter max fuel capacity: "<<endl;
        cin>>maxfuelcap;
    }
    void showinfo(){
        cout<<"flight number: "<<flight_num<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Distance: "<<distance<<endl;
        cout<<"Max fuel capacity: "<<maxfuelcap<<endl;
        if(maxfuelcap>=val){
            cout<<"Fuel capacity is fit for this flight distance"<<endl;
        }
        else
            cout<<"Not sufficient Fuel Capacity for this flight."<<endl;
    }
};

int main(){
    flight f;
    f.feedinfo();
    f.showinfo();
}

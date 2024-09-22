#include<iostream>
#include<string>
using namespace std;

class temperature{
private:
    double tvalue;
    string unit;
public:
    void assign(double t, string u){
        if(u!="celsius" && u!="fahrenheit" && u!="kelvin"){
            cout<<"invalid unit"<<endl;
            return;
        }
        if((u=="celsius" && t<-273.15) || (u=="fahrenheit" && t<-459.67) ||
           (u=="kelvin" && t<0)){
            cout<<"temperature cannot be lower than absolute 0 temp."<<endl;
            return;
        }
        tvalue=t;
        unit=u;
    }

    double convert(string target){
        if(target!="celsius" && target!="fahrenheit" && target!="kelvin"){
            cout<<"invalid unit"<<endl;
            return tvalue;
        }
        if(unit=="celsius"){
            if(target=="fahrenheit"){
                return (tvalue*9/5+32);
            }
            else if(target=="kelvin"){
                return (tvalue+273.15);
            }
        }
        else if(unit=="fahrenheit"){
              if(target=="celsius"){
                return ((tvalue-32)*5/9);
            }
             else if(target=="kelvin"){
                return ((tvalue-32)*5/9+273.15);
            }
        }
        else if(unit=="kelvin"){
            if(target=="celsius"){
                return (tvalue-273.15);
            }
             else if(target=="fahrenheit"){
                return ((tvalue-273.15)*9/5+32);
            }
        }
        return tvalue;
    }

    void print(){
        cout<<"temperature is: "<<tvalue<<" "<<unit<<endl;
    }


};

int main(){
    temperature temp;

    temp.assign(100, "celsius");
    temp.print();

    double tempinf=temp.convert("fahrenheit");
    cout<<"Converted to F: "<<tempinf<<" F"<<endl;

    double tempink=temp.convert("kelvin");
    cout<<"Converted to K: "<<tempink<<" K"<<endl;
}

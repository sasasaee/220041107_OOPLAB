#include<iostream>
using namespace std;

class time{
private:
    int h,m,s;
public:
    time(): h(0),m(0),s(0){}
    time(int hr,int mn,int se){
        reset(hr,mn,se);
    }
    int hour(){
        return h;
    }
    int minute(){
        return m;
    }
    int sec(){
        return s;
    }
    void reset(int hr, int mn, int se){
        h=hr%24;
        m=mn%60;
        s=se%60;
    }
    void advance(int hr, int mn, int se){
        s+=se;
        m+=s/60;
        s%=60;

        m+=mn;
        h+=m/60;
        m%=60;

        h+=hr;
        h%=24;
    }
    void print(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

};

int main(){
    int h,m,s;

    cin>>h>>m>>s;

    time t(h,m,s);
    t.print();

    cin>>h>>m>>s;

    t.advance(h,m,s);
    cout<<"Updated time: ";
    t.print();

    cin>>h>>m>>s;

    t.reset(h,m,s);
    cout<<"after reset, time: ";
    t.print();

}

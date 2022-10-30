#include<iostream>
using namespace std;
class distance1{
    int km;
    int mtr;
    public:
    void input();
    void output();
    friend void add(distance1,distance1);
};
void distance1::input(){
    cout<<"Enter the value of km and mtr: ";
    cin>>km>>mtr;
    if(mtr>=1000){
        km++;
        mtr-=1000;
    }
}
void distance1::output(){
    cout<<"The distance in mtr and km is "<<mtr<<" and "<<km<<endl;
}
void add(distance1 d1, distance1 d2){
    distance1 local;
    local.mtr=d1.mtr+d2.mtr;
    local.km=d1.km+d2.km;
    if(local.mtr>=1000){
        local.km++;
        local.mtr-=1000;
    }
    cout<<"Addition of "<<d1.km<<", "<<d2.km<<" km and "<<d1.mtr<<", "<<d2.mtr<<" m is "<<local.km<<"km "<<local.mtr<<"m"<<endl;
}
int main(){
    distance1 d1,d2;
    d1.input();
    d2.input();
    add(d1,d2);
    d1.output();
    d2.output();
    return 0;
}

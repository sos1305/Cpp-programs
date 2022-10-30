#include<iostream>
using namespace std;
class distance1{
    int km;
    int mtr;
    public:
    void input();
    void output();
    void add(distance1,distance1);
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
void distance1::add(distance1 d1, distance1 d2){
    mtr=d1.mtr+d2.mtr;
    km=d1.km+d2.km;
    if(mtr>=1000){
        km++;
        mtr-=1000;
    }
}
int main(){
    distance1 d1,d2,d3;
    d1.input();
    d2.input();
    d3.add(d1,d2);
    d1.output();
    d2.output();
    d3.output();
    return 0;
}

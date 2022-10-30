#include<iostream>

using namespace std;

void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

int main(){
    int c=5,d=7;
    cout<<"The value of c and d before swapping is "<<c<<" and "<<d<<endl;
    swap(c,d);
    cout<<"The value of c and d after swapping is "<<c<<" and "<<d;
    return 0;
}

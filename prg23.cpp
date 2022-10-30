#include<iostream>

using namespace std;

void negation(int &a){
    a=-a;
}

int main(){
    int a=64;
    negation(a);
    cout<<"The negated value is "<<a;
    return 0;
}

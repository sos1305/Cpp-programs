#include<iostream>

using namespace std;

void negation(int *a){
    *a=-(*a);
}

int main(){
    int a=64;
    int *ptr=&a;
    negation(ptr);
    cout<<"The negated value is "<<a;
    return 0;
}

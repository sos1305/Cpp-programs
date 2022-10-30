#include<iostream>

using namespace std;

void add(){
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    int sum=a+b;
    cout<<"The sum of "<<a<<"and "<<b<<" is "<<sum;
}
void subtract(){
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    int diff=a-b;
    cout<<a<<"-"<<b<<"="<<diff;
}
void multiply(){
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    int prod=a*b;
    cout<<a<<"*"<<b<<"="<<prod;
}
void divide(){
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    float c;
    c=float(a)/float(b);
    cout<<a<<"/"<<b<<"="<<c;
}


int main(){
    int cho;
    do{
    cout<<"\nPress 1 for addition\nPress 2 for subtraction\nPress 3 for division\nPress 4 for multiplication\nPress 5 for exit\nEnter your choice: ";
    cin>>cho;
    switch(cho){
        case 1:
        add();
        break;
        case 2:
        subtract();
        break;
        case 3:
        divide();
        break;
        case 4:
        multiply();
        break;
        case 5:
        break;
    }
    }while(cho!=5);
    return 0;
}

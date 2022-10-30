#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter number 1:";
    cin>>num1;
    cout<<"Enter number 2:";
    cin>>num2;
    cout<<"Enter number 3:";
    cin>>num3;
    if(num1<num2 and num1<num3){
        cout<<num1<<" is the smallest number among "<<num1<<", "<<num2<<", and "<<num3;
    }
    else if(num1>num2 and num2<num3){
        cout<<num2<<" is the smallest number among "<<num1<<", "<<num2<<", and "<<num3;
    }
    else if(num1>num3 and num2>num3){
        cout<<num3<<" is the smallest number among "<<num1<<", "<<num2<<", and "<<num3;
    }
    return 0;
}
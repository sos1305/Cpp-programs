#include<iostream>

using namespace std;

int fact(int num){
    int factorial=1;
    for(int i=num;i>0;i--){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int a;
    cout<<"Enter a number to print its factorial: ";
    cin>>a;
    cout<<a<<"!"<<" = "<<fact(a);
    return 0;
}

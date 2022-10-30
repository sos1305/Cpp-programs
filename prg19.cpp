#include<iostream>

using namespace std;

const int func1(const int x){
    return x;
}

const int func2(int x){
    return ++x;
}

int func3(const int x){
    return x;
}

int func4(int x){
    return ++x;
}

int main(){
    int a=4;
    cout<<func1(a)<<endl;
    cout<<func2(a)<<endl;
    cout<<func3(a)<<endl;
    cout<<func4(a)<<endl;
    return 0;
}

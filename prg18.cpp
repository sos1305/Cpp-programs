#include<iostream>

using namespace std;

int factrec(int a){
    if(a==0 or a==1){
        return 1;
    }
    else{
        return a*factrec(a-1);
    }
}

int main(){
    cout<<"5!="<<factrec(5);
    return 0;
}

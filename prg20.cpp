#include<iostream>

using namespace std;

int abs(int a){
    if(a>=0){
        return a;
    }
    else{
        return a*(-1);
    }
}
float abs(float a){
    if(a>=0){
        return a;
    }
    else{
        return a*(-1);
    }
}
long int abs(long int a){
    if(a>=0){
        return a;
    }
    else{
        return a*(-1);
    }
}
int main(){
    
    cout<<abs(-5)<<endl;
    cout<<abs(-7.5)<<endl;
    cout<<abs(-495040302023)<<endl;
    return 0;
}

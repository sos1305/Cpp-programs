#include<iostream>

using namespace std;

int main(){
    char a;
    cout<<"Enter a character to check whether it is numeric or not: ";
    cin>>a;
    if(int(a)>=48 and int(a)<=57){
        cout<<a<<" is a numeric character";
    }
    else{
        cout<<a<<" is not a numeric character";
    }
    return 0;
}

#include<iostream>
#include<math.h>
using namespace std;

int len(int num){
    int length=0;
    while(num>0){
        num/=10;
        length++;
    }
    return length;
}

void armstrong(int input){
    int num=input;
        int sum=0;
    int n=len(num);
    if(len(num)>4){
        cout<<"This program only accepts a 4 digit number or less\n";
    }
    else{
        while(num>0){
            int rem=num%10;
            sum=sum+pow(rem,n);
            num/=10;
        }
        if(sum==input){
            cout<<input<<" is an armstrong number\n";
        }
        else{
            cout<<input<<" is not an armstrong number\n";
        }
    }
}

int main(){
    armstrong(153);
    return 0;
}

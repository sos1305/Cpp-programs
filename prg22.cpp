#include<iostream>

using namespace std;

void printNos(int n){
    if(n>=1){
        cout<<n<<endl;
        printNos(n-1);
    }
}

int main(){
    printNos(10);
    return 0;
}

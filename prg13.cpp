#include<iostream>

using namespace std;

class cls{

};
int main(){
    cout<<"Size of integer is "<<sizeof(int)<< " bytes"<<endl;
    cout<<"Size of float is "<<sizeof(float)<< " bytes"<<endl;
    cout<<"Size of char is "<<sizeof(char)<< " bytes"<<endl;
    cout<<"Size of an empty class is "<<sizeof(cls)<< " byte"<<endl;
    return 0;
}

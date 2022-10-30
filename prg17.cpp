#include<iostream>

using namespace std;

void volume(double a){
    cout<<"The volume of the sphere is "<<(4.0/3.0)*3.14*a*a*a<<endl;
}

void volume(double a, double b){
    cout<<"The volume of cylinder is "<<3.14*a*a*b<<endl;
}

void volume(int a){
    cout<<"The volume of the cube is "<<a*a*a<<endl;
}

void volume(int a,int b,int c){
    cout<<"The volume of the cuboid is "<<a*b*c<<endl;
}

int main(){
    volume(3.0);
    volume(3.0,5.0);
    volume(3);
    volume(3,4,5);
    return 0;
}

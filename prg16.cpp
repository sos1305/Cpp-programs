#include<iostream>

using namespace std;

void area(int a,int b){
    cout<<"The area of rectangle is "<<a*b<<endl;
}

void area(int a){
    cout<<"The area of the square is "<<a*a<<endl;
}

void area(double a){
    cout<<"The area of the circle is "<<3.14*a*a<<endl;
}

void area(double a, double b){
    cout<<"The area of the triangle is "<<0.5*a*b<<endl;
}

int main(){
    
    area(2,3);
    area(2);
    area(5.3);
    area(2.0,3.0);

    return 0;
}

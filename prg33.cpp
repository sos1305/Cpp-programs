#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    friend int sum(A obj1, B obj2);
    void input();
};
class B{
    int b;
    public:
    friend int sum(A obj1, B obj2);
    void input();
};
void B::input(){
    cout<<"Enter an integer:"<<endl;
    cin>>b;
}
void A::input(){
    cout<<"Enter an integer:"<<endl;
    cin>>a;
}
int sum(A obj1, B obj2){
    return obj1.a+obj2.b;
}
int main(){
    B b;
    A a;
    int s;
    a.input();
    b.input();
    s=sum(a,b);
    cout<<"The sum of data in both the classes is "<<s<<endl;
    return 0;
}

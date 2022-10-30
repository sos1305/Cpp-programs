#include <iostream>
using namespace std;
class B;    
class A{
    int i;
  public:
    void input()
    {
        cout<<"Enter an integer"<<endl;   
        cin>>i;
    }  
    void output(B);
};
class B{
    int j;
  public:
    void input()    
    {
        cout<<"Enter an integer"<<endl;
        cin>>j;
    }  
    friend void A::output(B);    
};
void A::output(B b1)
{
    cout<<"The data of class A is "<<i<<endl;  
    cout<<"The data of class B is "<<b1.j<<endl; 
}
int main()
{
    A a;
    B b;
    a.input();  
    b.input();
    a.output(b);
    return 0;
}
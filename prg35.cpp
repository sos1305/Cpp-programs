#include <iostream>
using namespace std;

class tym
{
    int hr,min,sec;   
  public:
    void input();
    void output();
    friend void add(tym,tym);   
};
void tym::input()
{
    cout<<"Enter the values of hours, minutes and seconds"<<endl;
    cin>>hr>>min>>sec;
}
void tym::output()
{
    cout<<"The Time in hours, minutes and seconds are "<<hr<<","<<min<<" and "<<sec<<endl;
}
void add(tym t1, tym t2)
{
    tym local;
    local.min=t1.min+t2.min;   //adding all objects hr, min and sec
    local.hr=t1.hr+t2.hr;
    local.sec=t1.sec+t2.sec;
    if(local.sec>=60)
    {
        local.min++;         
        local.sec=local.sec-60;
    }
    if(local.min>=60)
    {
        local.hr++;            
    }
    cout<<"Addition of "<<t1.hr<<" and "<<t2.hr<<" is "<<local.hr<<endl;
    cout<<"Addition of "<<t1.min<<" and "<<t2.min<<" is "<<local.min<<endl;
    cout<<"Addition of "<<t1.sec<<" and "<<t2.sec<<" is "<<local.sec<<endl;
}
int main()
{
    tym obj1,obj2;
    obj1.input();
    obj2.input();    
    add(obj1,obj2);  
    obj1.output();
    obj2.output();     
    return 0;
}
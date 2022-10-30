#include <iostream>
using namespace std;

class Time1
{
    int hr,min,sec; 
  public:
    void input();
    void output();
    friend Time1 add(Time1,Time1);  
};

void Time1::input()
{
    cout<<"Enter the values of hours, minutes and seconds"<<endl;
    cin>>hr>>min>>sec;
}

void Time1::output()
{
    cout<<"The Time in hours, minutes and seconds are "<<hr<<","<<min<<" and "<<sec<<endl;
}

Time1 add(Time1 t1, Time1 t2)
{
    Time1 local;
    local.min=t1.min+t2.min;  
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
        local.min=local.min-60;
    }
    return local;
}

int main()
{
    Time1 obj1,obj2,obj3;
    obj1.input();
    obj2.input();    
    obj3=add(obj1,obj2);  
    obj1.output();
    obj2.output(); 
    obj3.output();     
    return 0;
}
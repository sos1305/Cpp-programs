#include <iostream>
using namespace std;
class second; 
class first{
    int x;
  public:
    void getdata()
    {
        cout<<"Enter an integer"<<endl;
        cin>>x;
    }  
    friend class second;
};
class second{
 public:
    void putdata(first temp)
    {
       cout<<"The integer is "<<temp.x<<endl;
    }
    void checkodd(first temp)
    {
        if(temp.x%2==0)
          cout<<temp.x<<" is even"<<endl;
        else 
          cout<<temp.x<<" is odd"<<endl;  
    }
};
int main()
{
    first obj1;
    second obj2;
    obj1.getdata();
    obj2.putdata(obj1);
    obj2.checkodd(obj1);
    return 0;
}
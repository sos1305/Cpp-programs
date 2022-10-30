#include <iostream>
using namespace std;

class c {
    static int resource;        //static data member
  public:
    static int get_resource();  //static member function
    void free_resource()
    {
        resource=0;      //freeing up resources by making them 0
    }
};
int c::resource;       //define resource
int c::get_resource()
{
    if(resource)
      return 0;       //resource already in use
    else{
        resource=1;   //resource allocated to this object
        return 1;
    }  
}
int main()
{
    c ob1,ob2;
    //get_resource is static so can be called independent of object
    if(c::get_resource())
      cout<<"ob1 has resource"<<endl; 
    if(!c::get_resource())
      cout<<"ob2 denied resource"<<endl;
    ob1.free_resource();
    //can also be called with object
    if(ob2.get_resource())
      cout<<"ob2 can now use resource"<<endl;
    return 0;      
}
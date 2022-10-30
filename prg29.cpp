#include <iostream>
using namespace std;

class statictype{
    static int i;    
    public:
    static void set(int x){  
        i=x;
    }
    void show()
    {
        cout<< "The value of static data member is "<<i;
    }

};

 int statictype::i;    

int main()
{

    statictype::set(100);

    statictype x;
    x.show(); 

    return 0;
}
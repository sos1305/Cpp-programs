#include <iostream>
using namespace std;

class first{
    static int a;   
    int b;
    public:
    void set(int i ,int j) 
    {  
       a=i;       
       b=j;
    }

    void show();
} ;
int first :: a;
void first :: show()
{
    cout << "This is static data member a: "<<a<<endl;  
    cout<< "This is non-static data member b: "<<b<<endl;
}

int main()
{
    first x,y;
    x.set(1,1);
    x.show();
    y.set(3,3);
    y.show();
//when we change a for object y, it is changed for x as well because it is shared by both
    x.show();        
    return 0;

}
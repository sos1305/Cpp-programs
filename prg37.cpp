#include <iostream>
using namespace std;

class PT;    
class FT{
    string name;
    int age,marks;
  public:
    void input()
    {
        cout<<"Enter name of student"<<endl;
        cin>>name;
        cout<<"Enter age and marks of student"<<endl;
        cin>>age>>marks;
    }  
    void output()
    {
        cout<<"The name of student is "<<name<<endl;
        cout<<"The age and marks of student are "<<age<<" and "<<marks<<endl;
    }
    friend void compare(FT,PT);
};

class PT{
    string name;
    int age,marks;
  public:
    void input()
    {
        cout<<"Enter name of student"<<endl;
        cin>>name;
        cout<<"Enter age and marks of student"<<endl;
        cin>>age>>marks;
    }  
    void output()
    {
        cout<<"The name of student is "<<name<<endl;
        cout<<"The age and marks of student are "<<age<<" and "<<marks<<endl;
    }
    friend void compare(FT,PT);
};

void compare(FT ft1, PT pt1)
{
    if(ft1.marks>pt1.marks)
    {
        cout<<"Marks of full time student are higher"<<endl;
        ft1.output();
    }
    else if(ft1.marks<pt1.marks)
    {
        cout<<"Marks of part time student are higher"<<endl;
        pt1.output();
    }
    else{
        cout<<"Marks of both are equal"<<endl;
        ft1.output();
        pt1.output();
    }
}

int main()
{
    FT full;
    PT part;
    full.input();
    part.input();
    compare(full,part);
    return 0;
}
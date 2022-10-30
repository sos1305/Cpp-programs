#include<iostream>

using namespace std;

class Student{
    int enrol_num,age;
    string name;
    public:
    void get(){
        cout<<"Enter the name, enrollment number and age of the student: ";
        cin>>name>>enrol_num>>age;
    }
    void put(){
        cout<<"The name of the student is "<<name<<". The enrollment number of the student number is "<<enrol_num<<". The age of the student is "<<age<<".\n";
    }
};

int main(){
    Student s1,s2;
    s1.get();
    s1.put();
    s2.get();
    s2.put();
    
    return 0;
}

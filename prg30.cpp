#include <iostream>
using namespace std;
class student
{
    int roll,age;
    int marks[8];
    string name;
public:
    void input();
    void output();
};
void student::input(){
    cout<<"Enter the name of the student: "<<endl;
    cin>>name;
    cout<<"Enter the age of the student: "<<endl;
    cin>>age;
    cout<<"Enter the roll number of the student: "<<endl;
    cin>>roll;
    for(int i=0;i<8;i++){
    cout<<"Enter the marks of the student in subject: "<<i+1<<endl;
    cin>>marks[i];
    }
}
void student::output(){
    cout<<"The name of the student is "<<name<<endl;
    cout<<"The age of "<<name<<" is "<<age<<endl;
    cout<<"The roll number of "<<name<<" is "<<roll<<endl;
    for(int i=0;i<8;i++){
        cout<<"The marks of "<<name<<" in subject "<<i+1<<" is "<<marks[i]<<endl;
    }
}
int main()
{
    student s[2];
    for(int i=0;i<2;i++){
        s[i].input();
    }
    for(int i=0;i<2;i++){
        s[i].output();
    }
    return 0;
}

#include<iostream>

using namespace std;

class frnd{
    int a;
    public:
    void input(){
        cout<<"Enter an integer:"<<endl;
        cin>>a;
    }
    friend void max(frnd f1, frnd f2){
        if(f1.a>f2.a){
            cout<<"The data of 1st object is larger"<<endl;
        }
        else if(f1.a<f2.a){
            cout<<"The data of 2nd object is larger"<<endl;
        }
        else{
            cout<<"The data of both the objects are equal"<<endl;
        }
    }
};

int main(){
    frnd f1,f2;
    f1.input();
    f2.input();
    max(f1,f2);
    return 0;
}

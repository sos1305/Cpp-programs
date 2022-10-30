#include<iostream>

using namespace std;

void primeno(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0){
            sum++;
        }
    }
    if (sum == 2)
    {
        cout<<a<<" is a prime number"<<endl;
    }
    else{
        cout<<a<<" is not a prime number"<<endl;
    }
}

int main(){
    int x;
    cout<<"Enter a number to check whether it is prime or not:";
    cin>>x;
    primeno(x);
    return 0;
}

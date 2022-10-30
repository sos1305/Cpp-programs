#include<iostream>

using namespace std;

int main(){
    char x;
    cout<<"Enter a letter to check whether it is a vowel or not: ";
    cin>>x;
    switch(x){
        case 'a':
        cout<<x<<" is a vowel";
        break;
        case 'e':
        cout<<x<<" is a vowel";
        break;
        case 'i':
        cout<<x<<" is a vowel";
        break;
        case 'o':
        cout<<x<<" is a vowel";
        break;
        case 'u':
        cout<<x<<" is a vowel";
        break;
        default:
        cout<<x<<" is a consonant";
        break;
    }
    return 0;
}

#include <iostream>

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
        cout<<a<<endl;
    }
}
int main()
{
    int x;
    cout << "Enter the limit till which you want to display the prime numbers:";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        primeno(i);
        
    }
    return 0;
}

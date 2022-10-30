#include <iostream>

using namespace std;

int len(int num)
{
    int length = 0;
    if (num == 0)
    {
        return 1;
    }
    while (num > 0)
    {
        num /= 10;
        length++;
    }
    return length;
}

int power(int x, int y)
{
    int pow = x;
    if (y == 0)
    {
        return 1;
    }
    while (y > 1)
    {
        pow = pow * x;
        y--;
    }
    return pow;
}

void palindrome(int x)
{
    int front, back, length;
    length = len(x);
    front = x % power(10, (length / 2));
    back = x / power(10, ((length + 1) / 2));
    int reversedback = 0;
    while (back > 0)
    {
        reversedback = reversedback + (back % 10);
        back /= 10;
        reversedback *= 10;
    }
    reversedback /= 10;
    if (front == reversedback)
    {
        cout << x << " is a palindrome number";
    }
    else
    {
        cout << x << " is not a palindrome number";
    }
}

int main()
{
    int a;
    cout << "Enter a number to check whether it is a palindrome or not: ";
    cin >> a;
    palindrome(a);
    return 0;
}

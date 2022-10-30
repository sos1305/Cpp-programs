#include <iostream>
using namespace std;
class box
{
public:
    int length,breadth,height;
    void input()
    {
        cout << "Enter the length of box :";
        cin >> this->length;
        cout << "Enter the breadth of box :";
        cin >> this->breadth;
        cout << "Enter the height of box :";
        cin >> this->height;
    }
    void output()
    {
        cout << "The length of the box is " << this->length << endl;
        cout << "The breadth of the box is " << this->breadth << endl;
        cout << "The height of the box is " << this->height << endl;
        cout << endl
             << "The volume of the box is " << this->length * this->breadth * this->height;
    }
};
int main()
{
    box box1;
    box1.input();
    cout<<endl;
    box1.output();
    cout<<endl;
    box box2;
    box2.input();
    cout<<endl;
    box2.output();
    return 0;
}

#include <iostream>
using namespace std;
class complex{
     int real,imag;
   public:
      void input()
      {                                           //input function
        cout<<"Enter the real and imaginary part of complex number"<<endl;
        cin>>real>>imag;
      } 
      void output()
      {
        cout<<"The complex number is: "<<real<<"+"<<imag<<"i"<<endl;  //output function
      }
      complex add(complex,complex);
      complex subtract(complex,complex);
      complex multiply(complex,complex);
};
complex complex:: add(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;    //add function returning object
    temp.imag=c1.imag+c2.imag;
    return temp;
}
complex complex:: subtract(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;    //subtract function returning object
    return temp;
}
complex complex:: multiply(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real*c2.real;    //multiply function returning object
    temp.imag=c1.imag*c2.imag;
    return temp;
}
int main()
{
    complex c1, c2, sum, diff, prod;  //creating objects
    c1.input();
    c2.input();
    sum=sum.add(c1,c2);  //add function on sum object
    diff=diff.subtract(c1,c2);  //subtract function on diff object
    prod=prod.multiply(c1,c2);  //multiply function on prod object
    cout<<"For object c1"<<endl;
    c1.output();                //output for c1
    cout<<"For object c2"<<endl;
    c2.output();               //output for cf2
    cout<<"After adding:"<<endl;
    sum.output();               //output for sum
    cout<<"After subtracting:"<<endl;
    diff.output();             //output for diff
    cout<<"After multiplying:"<<endl;
    prod.output();            //output for prod
    return 0;
}
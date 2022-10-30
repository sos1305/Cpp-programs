#include <iostream>
using namespace std;

void input(int a[3][3] , float b[3][3]){
    int i,j;
    cout << "Enter 9 integer elements"<< endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];         
        }
    }

     cout << "Enter 9 float  elements"<< endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
}
int intsum(int a[3][3] )
{
    int i,j,sumi=0;
    for(i=0;i<3;i++)
    {                      
        for(j=0;j<3;j++){
            sumi+=a[i][j];
        }
    }
    return sumi;
}
float floatsum(float b[3][3] )
{
    int i,j;
    float sumf=0.0;
    for(i=0;i<3;i++)
    {                         
        for(j=0;j<3;j++){
            sumf+=b[i][j];
        }
    }
    return sumf;
}
void output( int sumi ,  float sumf)
{
    cout<<"The sum of all integer elements is : "<<sumi<<endl;
    cout<<"The sum of all float elements is : "<<sumf<<endl;
}
int main()
{
    int a[3][3];    
    float b[3][3];  
    int sumi;
    float sumf;
    input(a,b);    
    sumi=intsum(a);   
    sumf=floatsum(b);
    output(sumi,sumf);  
    return 0;

}
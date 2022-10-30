#include<iostream>
using namespace std;
void sphere(){
    int r;
    float vol;
    cout<<"Enter the radius of sphere:";
    cin>>r;
    vol=(4*r*r*r*3.14)/3;
    cout<<"The volume of the sphere is "<<vol;
}
void cube(){
    int side;
    cout<<"Enter the side of cube: ";
    cin>>side;
    float vol=side*side*side;
    cout<<"The volume of the cube is "<<vol;
}
void cuboid(){
    int len,bre,hei;
    cout<<"Enter the length of cube: ";
    cin>>len;
    cout<<"Enter the breadth of cube: ";
    cin>>bre;
    cout<<"Enter the height of cube: ";
    cin>>hei;
    float vol=len*bre*hei;
    cout<<"The volume of the cuboid is "<<vol;
}
void cone(){
    int rad,hei;
    cout<<"Enter the radius of the cone: ";
    cin>>rad;
    cout<<"Enter the height of the cone: ";
    cin>>hei;
    float vol=(1/3.0)*3.14*rad*rad*hei;
    cout<<"The volume of the cone is "<<vol;
}
void cylinder(){
    int rad,hei;
    cout<<"Enter the radius of the cylinder: ";
    cin>>rad;
    cout<<"Enter the height of the cylinder: ";
    cin>>hei;
    float vol=3.14*rad*rad*hei;
    cout<<"The volume of the cylinder is "<<vol;
}
int main(){
    int cho;
    do{
        cout<<"\n1. Volume of Sphere\n2.Volume of Cone\n3.Volume of Cylinder\n4. Volume of Cuboid\n5. Volume of Cube\n6. Exit\nEnter your choice:";
        cin>>cho;
        switch(cho){
            case 1:
            sphere();
            break;
            case 2:
            cone();
            break;
            case 3:
            cylinder();
            break;
            case 4:
            cuboid();
            break;
            case 5:
            cube();
            break;
            case 6:
            break;
        }
    }while(cho!=6);
    return 0;
}

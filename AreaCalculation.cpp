#include <iostream>

using namespace std;

int main()
{
    
    char Object;
    cout<<"**** Welcome to the area calculation program ****"<<endl;
    cout<<"For the square : k"<<endl;
    cout<<"For the triangle : u"<<endl;
    cout<<"For the apartment : d"<<endl;
    cout<<"Election = ";
    cin>>Object;
    if(Object=='k')
    {
        double SquareArea=0;
        double Length1=0;
        double Length2=0;
        cout<<"1. The length of the edge = ";
        cin>>Length1;
        cout<<"2. The length of the edge = ";
        cin>>Length2;
        SquareArea=(Length1)*(Length2);
        cout<<"Area of ​​the square "<<SquareArea<<endl;
    }
    else if(Object=='u')
    {
        double TriangleArea=0;
        double Height=0;
        double Base=0;
        cout<<"Enter the height of the triangle = ";
        cin>>Height;
        cout<<"Enter the bottom of the triangle = ";
        cin>>Base;
        TriangleArea=((Height)*(Base))/2;
        cout<<"area of ​​triangle "<<TriangleArea<<endl;
    }
    else if(Object=='d')
    {
        double pi=3.14;
        double CircleArea;
        double radius=0;
        cout<<"Enter the radius of the circle = ";
        cin>>radius;
        CircleArea=(pi)*(radius)*(radius);
        cout<<"Area of ​​the circle "<<CircleArea<<endl;
    }
}

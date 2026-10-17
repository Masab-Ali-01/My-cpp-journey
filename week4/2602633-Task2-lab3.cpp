#include<iostream>
using namespace std;
int main(){
    const float pi = 3.1415;
    int r,diameter;
    double area,circumference;
    cout<<"Enter radius:";
    cin>>r;

    area = pi*r*r;
    circumference = 2*pi*r;

    cout<<"Diameter:"<<r*2;
    cout<<"\ncircumference:"<<circumference;
    cout<<"\nArea:"<<area;
    return 0;
}
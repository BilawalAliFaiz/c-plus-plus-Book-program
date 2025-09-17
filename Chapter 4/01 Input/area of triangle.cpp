//write a program tht input base and height form the user .it calculate and display the area of a triangle by using the formula area =1/2*base*height .
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 float base,height;
 double area;
 cout<<"enter the base of triangle: ";
 cin>>base;
 cout<<"enter the height of triangle : ";
 cin>>height;
 area=0.5*base*height;
 cout<<"area = "<<setprecision(5)<<area;
 }

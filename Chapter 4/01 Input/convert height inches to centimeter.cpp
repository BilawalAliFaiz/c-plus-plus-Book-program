//write a program that convert person height from inches to centimeter using the formula 2.54*height.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int height;
float height_in_cen;
cout<<"enter your height in inches : ";
cin>>height;
height_in_cen=height*2.54;
cout<<"your height in centimeter is : ";
cout<<setprecision(3)<<height_in_cen; 
}

//write a program that input radius from the user and calculate area and circumfarance of circle 
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float area,radius,cir;
	cout<<"enter radius : ";
	cin>>radius;
	area=radius*radius*3.141;
	cir=2.0*3.141*radius;
	cout<<"Area : "<<setprecision(3)<<area<<endl;
	cout<<"circumfarance = "<<setprecision(3)<<cir;
 } 

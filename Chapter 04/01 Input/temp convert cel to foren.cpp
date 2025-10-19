//write a program that get temp from user in celcius and convert it into forenheit using the formula f=9/5*c+32.
#include<iostream>
#include<iomanip>>
using namespace std;
int main()
{
	float cel,faren;
	cout<<"enter temperature in clecius : ";
	cin>>cel;
	faren=9.0/5.0*cel+32;
	cout<<"temperture in farenheit is : ";
	cout<<setprecision(3)<<faren;
}

////write a progrma to calculate the simple interest. it input principle amount ,rate of iinterest and the number of years and display the simple interest
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double p,r,t,i;
	cout<<"enter principal amount ,rate,time:";
	cin>>p>>r>>t;
	i=(p*r*t)/100;
	cout<<"\nprincipal amount rate =RS"<<p;
	cout<<"\nrate ="<<r<<"%";
	cout<<"\ntime="<<t<<"yrs";
	cout<<"\nsimple interest amt =RS"<<i;
}

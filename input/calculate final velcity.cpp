//write a program that calculate the final velcoity of an object by taking following input from the user :vi=inital velocity,a=accelration,t=time span.formaula vf=vi+at.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int vi,vf,a,t;
	cout<<"Enter initial velocity : ";
	cin>>vi;
	cout<<"Enter the accelration : ";
	cin>>a;
	cout<<"Enter the time : ";
	cin>>t;
	vf=vi+a*t;
	cout<<"The final veocity is : "<<vf;
	
}

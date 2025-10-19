//write a program that input distant travel and the speed of vehicle .It calulate the time required to reach the destention and display it 
#include<iostream>
using namespace std;
int main()
{
	double distant,time,speed;
	cout<<"enter the distant travels in meel : ";
	cin>>distant;
	cout<<"enter the speed of vehicle: ";
	cin>>speed;
	time =distant/speed;
	cout<<"the time required to reach the distentaion is "<<time<<"hours";
}


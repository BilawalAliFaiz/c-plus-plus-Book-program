//write a program that input two number swap the values without using third variable
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\nEnter two integer respectively : ";
	cin>>x>>y;
	cout<<"\nthe original value in x="<<x<<"and y = "<<y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"\nthe swapped values in x ="<<x<<"and y ="<<y;
}

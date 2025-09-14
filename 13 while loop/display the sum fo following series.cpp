//write a program that display the sum of following series using while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float c,r;
	c=2.0;
	r=1.0;
	while(c<=100)
	{
		r=r+1.0/c;
		c=c+2;
	}
	cout<<"Result is "<<r;
}

//write a program that gets two number from the user and displays the result of first number raise to the power of second number using do while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,r;
	cout<<"Enter first number :";
	cin>>a;
	cout<<"Enter second number :";
	cin>>b;
	c=1;
	r=1;
	do
	{
		r=r*a;
		c=c+1;
	}
	while(c<=b);
	cout<<"Result is "<<r;
	getch();
	}

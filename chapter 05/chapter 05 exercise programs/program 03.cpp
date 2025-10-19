//write a program to get three number from user integer variable a,band c.If a is not zero,find out whether it is the common divisor of b andc.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter an integer :";
	cin>>a;
	cout<<"Enter an integer :";
	cin>>b;
	cout<<"Enter an integer :";
	cin>>c;
	if(a==0)
	{
		cout<<"integer you entered is "<<a;
	}
	else if(a>b&&a<c)
	{
		cout<<"The integer you typed is the common divisor of "<<b<<"and"<<c;
	}
	else
	{
		cout<<"The integer you typed is greter than "<<b<<"and"<<c;
	}
}


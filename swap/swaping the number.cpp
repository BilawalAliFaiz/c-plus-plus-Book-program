//write a program that input two number swap the value and displat them.
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter the first number : ";
	cin>>a;
	cout<<"enter the second number : ";
	cin>>b;
	cout<<"you input the number as"<<a<<"and "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"the values after swaping are "<<a<<"and "<<b<<endl;
	}

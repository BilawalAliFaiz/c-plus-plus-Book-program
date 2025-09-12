#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first enteger : ";
	cin>>a;
	cout<<"Enter second enteger : ";
	cin>>b;
	if(a%b==0)
	{
		cout<<"The first integer is a multiple of a second number : ";
		cin>>a;
	}
	else
	cout<<"The second integer is a not multiple of first number : ";
}

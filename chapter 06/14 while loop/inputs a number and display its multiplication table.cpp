//Write a program that inputs a number from the user and display a table of that number using while looop./
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,c;
	c=1;
	cout<<"Enter a number :";
	cin>>n;
	while(c<=10)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
		c=c+1;
	}
	getch();
}

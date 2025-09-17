//write a program that display first five number and their sum using while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int c,sum;
	c=1;
	sum=0;
	while(c<=5)
	{
		cout<<c<<endl;
		sum=sum+c;
		c=c+1;
		
	}
	cout<<"Sum is "<<sum;
	getch();
}

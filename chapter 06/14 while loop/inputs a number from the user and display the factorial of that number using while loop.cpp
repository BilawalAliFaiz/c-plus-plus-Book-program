//write a program that inputs a number from the user and displays the factorial of that number using while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long int n,c,f;
	c=1;
	f=1;
	cout<<"Enter a number :";
	cin>>n;
	while(c <=n)
	{
		f=f*f*c;
		c=c+1;
	}
	cout<<"Factorail of "<<n<<" is "<<f;
}

//Write a program that input an integer and display the sum of its digits.For example,the program should display 9 if the user enter 135.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,x,r,sum=0;
	cout<<"Enter an integer :";    
	cin>>x;
	a=x;
	while(x!=0)
	{
		r=x % 10;
		if(r==0)
		
			sum=sum+x;
			else
			sum=sum+r;
			x=x/10;
		
	}
	cout<<"The sum of digits of "<<a<<"="<<sum;
	getch();
}


//write a program that find the sum of the squares of integer from 1 to N.Where n is a positive value entered by the user.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,c;
	long int sum;
	sum=0;
	cout<<"Enter a number :";
	cin>>n;
	for(c=1;c<=n;c++)
	sum=sum+(c*c);
	cout<<"sum is "<<sum<<endl;
}


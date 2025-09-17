//write a program that inputs a number and check whether it is an Armsrtrong number or not.A number is an,Arstrong number if the sum of the cube of its digits it equall to the number itself. For example 371 is an Armstrong number since 3cube,7cube,1cube=371
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int number,n,r,sum;
	cout<<"Enter a numbre :";
	cin>>number;
	n=number;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+ (r*r*r);
		n/=10;
	}
	if (sum==number)
	cout<<number<<" "<<" is an armstrong number :";
	else
	cout<<number<<" "<<" is not armstrong number :";
}


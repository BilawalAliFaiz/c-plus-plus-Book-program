//write a program that input a number from the user and print the lowest and highest digit in the number.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
cout<<"Enter a number : ";
cin>>n;
int num=n;
int high=n%10,low=n%10,rem;
n=n/10;
for(int i=n;i>=1;i=i/10)
{
	rem=i%10;
	if(rem>high)
	high=rem;
	else if(rem<low)
	low=rem;
}
cout<<"The highest digit in "<<num<<" is "<<high<<endl;
cout<<"The lowest digit in "<<num<<" is "<<low <<endl;
}



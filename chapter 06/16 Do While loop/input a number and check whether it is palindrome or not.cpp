//write a program that inputs a number and check whether it is a palindrome or not. A palindrome is a number that reads the backwards as forwards such as 62526 and 4994.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long int n,num,digit,rev=0;
	cout<<"Enter a positive number :";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	cout<<"The reverse of the number is :"<<rev<<endl;
	if(n==rev)
	cout<<"The number is Palidrome :";
	else
	cout<<"The number is not Palindrome :";
}

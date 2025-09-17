//write a program that inputs a number from the user and displays n fibonnaci terms.In fibonci sequence,sum of two succesive terms gives the third term.
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int a,b,next,n,count;
	cout<<"How many fibonacci terms required :";
	cin>>n;
	a=0;
	b=1;
	cout<<"Fibonci term are "<<endl;
	cout<<a<"\t"<<"b";
	count=2;
	while(count<n)
	{
		next=a+b;
		cout<<"\t"<<next;
		count++;
		a=b;
		b=next;
	}
}

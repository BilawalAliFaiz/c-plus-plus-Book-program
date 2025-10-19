//write a program that inputs a number form the user and display n fibonacci terms.In Fibonacci sequence ,sum of two successive terms gives the third term.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,next,n,count;
	cout<<"How many Fibonacci terms required :";
	cin>>n;
	a=0;
	b=1;
	cout<<"Fibonacci terms are"<<endl;
	cout<<a<<"\t"<<b;
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

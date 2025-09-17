//write a program that input three number and display the smallest number by using nested if condition.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three number  :";
	cin>>a>>b>>c;
	if(a<b)
	if(a<c)
	cout<<a<<" is smallest number :";
	else
	cout<<b<<" is smallest number :";
	else
	if(b<c)
	cout<<b<<" is smallest number :";
	else
	cout<<c<<" is smalest number :";
}


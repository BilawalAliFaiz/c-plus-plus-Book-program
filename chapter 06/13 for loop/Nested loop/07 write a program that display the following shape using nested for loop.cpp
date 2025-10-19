//write a program that display the following shape using nested for loops.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
}


//write a program that display the following output using loops.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,s;
	for(i=1;i<=6;i--)
	{
		for(s=1;s<=6-1;s++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<endl;
	}
}

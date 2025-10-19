//write a program that input the height of triangle and display a traingle of character.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch='A';
	int n,i,j;
	cout<<"Enter the height of traingle : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<"\n";
	}
  }  
  

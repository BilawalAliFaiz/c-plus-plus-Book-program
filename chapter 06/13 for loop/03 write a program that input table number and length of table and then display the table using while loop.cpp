//write a program that input a table number and length of table and then display the table using while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int tab,len,c;
	cout<<"Enter the number of table :";
	cin>>tab;
	cout<<"Enter the length of table :";
	cin>>len;
	for(c=1;c<=len;c++)
	cout<<tab<<" * "<<c<<"="<<tab*c<<endl;
}


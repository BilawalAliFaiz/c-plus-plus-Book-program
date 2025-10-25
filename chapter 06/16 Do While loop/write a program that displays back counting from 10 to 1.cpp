//write a program that displays back-counting from 10 to 1 using do while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int c;
	c=10;
	do
	{
		cout<<c<<endl;
		c=c-1;
		
	}
	while(c>=1);
	getch();
}

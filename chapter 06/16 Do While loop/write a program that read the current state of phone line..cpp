//write a program that gets starting number and ending point from the user and displays all odd number in the given range using do while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char s;
	do
	{
		cout<<"Enter the states of phone (\'W\' for working \'d\' for dead):";
		cin>>s;
}
while(s!='W' && s!='d');
getch();
}

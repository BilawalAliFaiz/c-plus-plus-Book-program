//write a program that input a year and find wheather it is leap year or not using if else statement
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a year :";
	cin>>year;
	if(year%4==0)
	{
		cout<<year<<":"<<" is a leep year  :";
		
	}
	else
	cout<<year<<":"<<"  is not leep year ";
}

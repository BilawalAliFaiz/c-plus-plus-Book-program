//write a program that input marks and display "Congratulation!"you have passed .If the marks are 40 or more
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter a number : ";
	cin>>marks;
	if (marks>40)
	{
		cout<<"Congratultion you have passed :";
	}
	else
	cout<<"oh you are fail :";
}

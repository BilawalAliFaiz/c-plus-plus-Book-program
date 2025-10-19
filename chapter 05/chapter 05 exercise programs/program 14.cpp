//write a program that input the salary of an employee from the user.It deduct the income tax from the salary on the following basis :
#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"Enter your salary :";
	cin>>salary;
	if(salary>30000)
	{
		cout<<"20% income tax apply on your salary :";
	}
	else if(salary>20000&&salary<30000)
	{
		cout<<"15% income tax apply on your salary :";
	}
	else
	{
		cout<<"10% income tax is apply on your salary :";
	}
	}

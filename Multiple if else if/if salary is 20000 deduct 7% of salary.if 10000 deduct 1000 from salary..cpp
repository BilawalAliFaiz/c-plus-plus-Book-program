//write a program thatt input salary.If the salary is 20000or more,it deduct 7% of salary.If the salary is 10000 or more but less than 20000,it deduct 1000 from the salary.if the salary is less than 10,000 it depend nothing .It fianlly dispalay the net salary.
#include<iostream>
using namespace std;
int main()
{
	int salary;
	float net;
	cout<<"Enter your salary :";
	cin>>salary;
	if(salary>=20000)
	net=salary - (salary * 7.0/100);
	else if (salary>=10000)
	net=salary - 1000;
	else
	net=salary;
	cout<<"Your net salary is "<<net;
	
}

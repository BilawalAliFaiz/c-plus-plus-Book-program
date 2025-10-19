//write a program that input three numbers and display the maximum number.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	int max;
	cout<<"Enter the first num :";
	cin>>num1;
	cout<<"Enter the second num :";
	cin>>num2;
	cout<<"Enter the third num  :";
	cin>>num3;
	max=num1;
	if (num2>max)
	{
		max=num2;
		if(num3>max)
		{
			max=num3;
	}
	}
	cout<<"the maximum number is : "<<max;
}

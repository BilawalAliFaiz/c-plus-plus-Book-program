#include<iostream>
using namespace std;
inline string check(int x)
{
	if (x%2==0){
		return "Even";
	}
	else
	return "Odd";
}
int main()
{
	int num1,num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"The first number  : "<<num1<<" is "<<check(num1)<<endl;
	cout<<"The second number : "<<num2<<" is "<<check(num2)<<endl;
}

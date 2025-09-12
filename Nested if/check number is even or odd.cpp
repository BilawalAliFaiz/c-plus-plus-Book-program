//write a program that inputs a number and displays whether it is even or odd by using logical operator "!"
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter any number :";
	cin>>n;
	if(!(n%2==0))
	cout<<"You entered odd number :";
	else
	cout<<"You entered even number :";
}


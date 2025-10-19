//write a program that input three digit number from the user and display it in reverse order.
#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cout<<"Enter three digit number : ";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"number in reverse order is "<<n<<b<<a;
}

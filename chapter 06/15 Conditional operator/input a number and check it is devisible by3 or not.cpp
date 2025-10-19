//write a program that inputs a number display whether it is divisible by 3 or not by using conditional operator
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number :";
	cin>>n;
	(n%3==0 ? cout<<"Devisible by 3 :": cout<<"not devisible by 3 :");
}


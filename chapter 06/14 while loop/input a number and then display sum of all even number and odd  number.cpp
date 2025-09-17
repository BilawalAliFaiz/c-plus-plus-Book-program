//write a program that inputs a positive number.It then display the sum of all odd numbers and the sum of all even number from 1 to the number entered by the user.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,oddsum=0,evensum=0;
	cout<<"Enter a positive numbers :";
	cin>>n;
	while(n>=0)
	{
		if(n%2==0)
		evensum=evensum+n;
		else
		oddsum=oddsum+n;
		n--;
		
	}
	cout<<"The sum of even digit is :"<<evensum<<endl;
	cout<<"The sum of odd digit is "<<oddsum<<endl;
}

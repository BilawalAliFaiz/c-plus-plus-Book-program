//write a program that inputs starting and ending number from the user and displays all even number in the given range using while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,s,e;
	cout<<"Enter starting number :";
	cin>>s;
	cout<<"Enter ending number :";
	cin>>e;
	n=s;
	while(n<=e)
	{
		if(n%2==0)
		cout<<n<<endl;
		n++;
	}
}

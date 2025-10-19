#include<iostream>
using namespace std;
int main()
{
	int c,n,p=1;
	cout<<"Enter an integer :";
	cin>>n;
		
	for(c=2;c<=n/2;c++)
	{
	if(n%2==0)
		{
			p=0;
			break;
		}

		
	}
			if(p%2==1)
		{
			cout<<n<<"is prime number :";
		}
		else 
		{
			cout<<n<<"is not prime number :";
		}
}

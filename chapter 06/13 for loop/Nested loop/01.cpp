//write a program that displays the product component of a number without repeting them.
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,s;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Product component of "<<n<<" are "<<endl;
	for(i=n;i>=s;i--)
	for(j=1;j<=n;j++)
	{
	
	if(i*j==n)
	{
		cout<<i<<"*"<<j<<endl;
		s=j+1;
	}
}
}

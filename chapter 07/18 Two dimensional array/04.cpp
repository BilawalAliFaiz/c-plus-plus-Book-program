#include<iostream>
#include<iomanip>
#include<conio.h>
#include<process.h>
using namespace std;
int main()
{
	int i,j,r1,r2,c1,c2,a[20][20],b[20][20],c[20][20];
	cout<<"Enter rows and coulmn of first matrix : ";
	cin>>r1>>c1;
	cout<<"Enter rows and coulmn of second matrix : ";
	cin>>r2>>c2;
	if((r1!=r2)||(c1!=c2))
	{
		cout<<"Matrix addition is not possible : ";
		exit(0);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<"Enter the "<<i<<" * "<<j<<" Element of first matrix : ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<"Enter the "<<i<<" * "<<j<<"element of second  matrix : ";
			cin>>b[i][j];
		}
	}
	cout<<endl;
	for(i=0;i<r1;i++)
	{
		cout<<endl;
		for(j=0;j<c1;j++)
		cout<<setw(9)<<a[i][j];
	}
	cout<<"\t"<<"+";
	cout<<endl;
	for(i=0;i<r1;i++)
	{
		cout<<endl;
		for(j=0;j<c1;j++)
		cout<<setw(9)<<b[i][j];
	}
	cout<<endl;
	cout<<"\t\t\t=";
	cout<<endl;
	for(i=0;i<r1;i++)
	{
		cout<<endl;
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<setw(9)<<c[i][j];
		}
	}
	
}


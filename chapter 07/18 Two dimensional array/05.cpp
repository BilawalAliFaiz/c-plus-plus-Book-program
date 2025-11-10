#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10][10],m,n,x,y,sum=0;
	cout<<"Enter number of  rows and column in matrix A :\n";
	cin>>n>>m;
	cout<<"Enter element of first matrix A : \n";
	for(x=0;x<n+1;++x)
	for(y=0;y<m+1;++y)
	cin>>a[x][y];
	for(x=0;x<n+1;++x)
	{
		a[x][m+1]=0;
		for(y=1;y<m+1;++y)
		a[x][m+1]=a[x][m+1]+a[x][y];
	}
	for(y=1;y<m+1;++y)
	{
		a[n+1][y]=0;
		for(x=0;x<n+1;++x)
		a[n+1][y]+=a[x][y];
	}
	cout<<"Matrix A, row sum and column sum :\n";
	for(x=1;x<n+1;++x)
	{
		for(y=1;y<m+2;++y)
		cout<<a[x][y]<<" ";
		cout<<"\n";
	}
	x=n+1;
	for(y=1;y<m+1;++y)
	cout<<a[x][y]<<" ";
	cout<<"\n";
	if(m==n)
	{
		for(x=0;x<m+1;++x)
		for(y=0;y<m+1;++y)
		if(x==y)
		sum+=a[x][y];
		else
		if(y==m-(x+1))
		sum+=a[x][y];
	}
	cout<<"Sum of diognal element is : "<<sum<<endl;
}


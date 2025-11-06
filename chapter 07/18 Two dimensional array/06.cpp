#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y;
	int A[4][4],sum=0;
	cout<<"Enter the element of first matrix : "<<endl;
	for(y=0;y<4;y++)
	for(x=0;x<4;x++)
	{
		cout<<"Element "<<x+1<<","<<y+1<<":";
		cin>>A[x][y];
		
	}
	for(x=0;x<4;x++)
	for(y=0;y<4;y++)
	if(x==y)
	sum+=A[x][y];
	cout<<"Sum of diagonal elements is : " << sum;
}

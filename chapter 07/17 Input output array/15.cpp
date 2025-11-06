#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[4][3];
	int rows=4;
	int colums=3;
	for(i=0;i<rows;i++)
	{
	
	for(j=0;j<colums;j++)
	{
		cout<<"Enter integer : ";
		cin>>arr[i][j];
	}
}
	cout<<endl;
	for(i=0;i<rows;i++)
	{
	
	for(j=0;j<colums;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
	
}

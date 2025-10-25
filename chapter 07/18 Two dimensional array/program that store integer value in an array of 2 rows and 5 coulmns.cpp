//write a program that store integer value in an array of 2 rows and 4 coulmns.
#include<iostream>
using namespace std;
int main()
{
	int arr[2][4],i,j;
	for(i=0;i<2;i++)
	for(j=0;j<5;j++)
	{
		cout<<"Enter an integer : ";
		cin>>arr[i][j];
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		cout<<arr[i][j]<<"\t";
		cout<<endl;
	}
}

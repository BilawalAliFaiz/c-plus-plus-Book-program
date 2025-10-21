#include<iostream>
using namespace std;
int main()
{
	const int size =5;
	int numbers[size];
	int squares[size];
	int cubes [size];
	int sums [size];
	for(int i=0;i<size;i++)
	{
		numbers[i]=i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]=numbers[i],squares[i];cubes[i];
	}
	int total=0;
	cout<<"numbers :\t";
	for(int i=0;i<size;i++)
	cout<<numbers[i]<<"\t";
	cout<<endl;
	cout<<"squares :\t";
	for(int i=0;i<size;i++)
	cout<<squares[i]<<"\t";
	cout<<endl;
	cout<<"Cubes :\t";
	for(int i=0;i<size;i++)
	cout<<cubes[i]<<"\t";
	cout<<endl;
	cout<<"Sums :\t\t";
	for(int i=0;i<size ;i++)
	{
		cout<<sums[i]<<"\t";
		total=total+sums[i];
	}
	cout<<endl;
	cout<<"Grand total ="<<total;
}


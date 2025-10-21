//write a program that input five values from the user , stores them in an array and displays the sum and average of the values.
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,sum=0;
	float avg;
	for(i=0;i<5;i++)
	{
		cout<<"Enter an integer : ";
		cin>>arr[i];
		sum=sum+arr[i];
		
	}
	avg=sum/5.0;
	cout<<"Sum is = "<<sum<<endl;
	cout<<"Average = "<<avg<<endl;
}


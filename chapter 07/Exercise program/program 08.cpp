//write a program that input ten floating point number in an array.It displays the value which are greater than the average value of the array.
#include<iostream>
using namespace std;
int main()
{
	float arr[10],sum=0,avg;
	cout<<"Enter ten floating point number : "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<"Average value of the array are : "<<avg<<endl;
	cout<<"\n Value greater than average value : ";
	for(int i=0;i<10;i++)
	{
		if(arr[i]>avg)
		{
			cout<<arr[i]<<" ";
		}
	}
	
}


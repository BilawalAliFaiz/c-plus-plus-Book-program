//write a program that inputs numbers until the user enter a negative number. The program claculates the average,maximum and minimum of all positive numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float num,sum;
	float avg,min,max;
	int count;
	sum=0.0;
	count=0;
	cout<<"Enter positive number :";
	cin>>num;
	min=num;
	max=num;
	while(num>=0.0)
	{
		sum+=num;
		count++;
		if(num>max)
		{
			max=num;
		}
		else if(num<min)
		min=num;
	cout<<"Enter a positive number :";
	cin>>num;	
	}
	if(count==0)
	cout<<"No positive number entered ."<<endl;
	else
	{
		avg=sum/count;
		cout<<"You entered "<<count<<"number "<<endl;
		cout<<"Average ="<<avg<<endl;
		cout<<"Minumum ="<<min<<endl;
		cout<<"Maximum ="<<max<<endl;
	}
}



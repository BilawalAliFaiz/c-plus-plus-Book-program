//write a program that input the age of different person and count the number of person in the age  group 50 and 60
#include<iostream>
using namespace std;
int main()
{
	int age[150],i,n,count=0;
	cout<<"Enter the number of person required : ";
	cin>>n;
	cout<<"Enter the age of "<<n<<" person :";
	for(i=0;i<n;i++)
	{
		cin>>age[i];
		if(age[i]>=50&&age[i]<=60)
		count=count +1;
	}
	cout<<count<<" : Person are between 50 and 60 :";
}


#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter a temperature :";
	cin>>temp;
	if(temp>35)
	{
		cout<<"Hot Day";
	}
	else if(temp>25&&temp<35)
	{
		cout<<"Pleasent Day :";
	}
    else
    {
    	cout<<"Cool Day :";
	}
}

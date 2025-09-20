//write a program that accepts the code number as input and display the correct drive munfacture as follows.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"code"<<"               "<<"disk drive manufacture\n";
	cout<<"1:                       western Digital\n";
	cout<<"2:                       3M coroporation\n";
	cout<<"3:                       Maxell corporation\n";
	cout<<"4:                       Sony coroporation\n";
	cout<<"5:                       verbatim corporation\n";
	cout<<"Enter a number (1-5)\n";
	cin>>num;
	if(num==1)
	{
	cout<<"1:western Digital";
	}
	else if(num==2)
	{
	cout<<"2:3M coroporation";	
	}
	else if(num==3)
	{
	cout<<"3:Maxell corporation";	
	}
	else if(num==4)
	{
	cout<<"4:Sony coroporation";
	}
	else
	{
			cout<<"5:verbatim corporation";
	}
}


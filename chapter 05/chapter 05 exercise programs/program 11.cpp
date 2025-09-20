//Write a program that input obtianed marks of student ,calcualte the percentage and displays grade according to following rules.
#include<iostream>
using namespace std;
int main()
{
	float obmarks,totalmarks;
	float percentage;
	cout<<"Enter obtained  marks :";
	cin>>obmarks;
	cout<<"Enter Total marks :";
	cin>>totalmarks;
	percentage=(obmarks/totalmarks)*100;
	cout<<"percentage ="<<percentage;
	if(percentage>=80)
	{
		cout<<"\nYour grade is A+";
	}
	else if(percentage>70&&percentage<80)
	{
		cout<<"\nYour grade is A";
		
	}
	else if(percentage>60&&percentage<70)
	{
		cout<<"\nYour grade is B";
	}
	else if(percentage>50&&percentage<60)
	{
		cout<<"\nYour grade is c";
	}
	else if(percentage>40&&percentage<50)
	{
		cout<<"\nYour grade is D";
	}
	else if(percentage>33&&percentage<40)
	{
		cout<<"\nYour grade is E";
	}
	else
	{
		cout<<"\nYour grade is F";
	}
}


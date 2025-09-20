//write a program that input year and month.It displays the number of days in the month of year entered by the user.
#include<iostream>
using namespace std;
int main()
{
	int year,month;
	cout<<"Enter a year :";
	cin>>year;
	cout<<"Enter month :";
	cin>>month;
	switch(month)
	{
		case 1 :
			cout<<" january "<<year<<" has 30 days :";
			break;
		case 2 :
			cout<<" February "<<year<<" has 28 days :";
			break;
		case 3:
			cout<<" March "<<year<<" has 31 days :";
			break;
		case 4:
			cout<<" April "<<year<<" has 30 days :";
			break;
		case 5:
			cout<<" May "<<year<<" has 30 days :";
			break;
		case 6:
			cout<<" june "<<year<<" has 30 days :";
			break;
		case 7:
			cout<<" jully "<<year<<" has 30 days :";
			break;
		case 8:
			cout<<" August "<<year<<" has 30 days :";
			break;
		case 9:
			cout<<" September "<<year<<" has 30 days :";
			break;
		case 10:
			cout<<" October "<<year<<" has 30 days :";
			break;
		case 11:
			cout<<" November "<<year<<" has 30 days :";
			break;		
		case 12:
			cout<<"December"<<year<<"has 30 days :";
			break;	
	}
}

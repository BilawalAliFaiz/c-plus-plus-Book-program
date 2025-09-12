//write a progrma that input number of weeks day and displays the number of the day.For example if user enter 1 it display friday and so on.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of weekday :";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Friday :";
			break;
		case 2:
		    cout<<"Saturday :";
			break;
		case 3:
			cout<<"Sunday :";
			break;
		case 4:
		    cout<<"Monday :";
			break;
		case 5:
		    cout<<"Tuesday :";
			break;
		case 6:
			cout<<"Wedensday :";
			break;
		case 7:
			cout<<"Thirsday :";
			break;
		default :
		cout<<"Invalid number :";			
	}
}

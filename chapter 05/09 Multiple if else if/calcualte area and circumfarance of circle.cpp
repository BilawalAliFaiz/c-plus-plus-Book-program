//write a program that input radius and user,s choice.It calculate area fo circle if user enter 1 as a choice. It calcualtes cirumfarance if the user enters 2 as choice.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float area,radius,circumfarance;
	int choice;
	cout<<"Enter radius : ";
	cin>>radius;
	cout<<"Enter 1 for area and 2 for circumfarance : ";
	cin>>choice;
	if(choice==1)
	{
	
	area=radius*radius*3.141;
	cout<<"Area"<<"="<<setprecision(4)<<area;
}
else if (choice==2)
{
	circumfarance=2.0*3.141*radius;
	cout<<"circumfarance :"<<circumfarance;
}
else
cout<<"invalid choice :";
	
 }  

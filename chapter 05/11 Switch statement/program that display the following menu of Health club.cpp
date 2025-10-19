//write a program that display the following menu of a health club.
//1 Standard Adult Memership
//2 Child Memership
//3 Senior citizen Memership
//4 Quit program
#include<iostream>
using namespace std;
int main()
{
	int choice,months;
	double charges;
	cout<<"Health club Memership Menu\n\n";
	cout<<"1 :Standard Adult Memership\n";
	cout<<"2 :Child Memership\n";
	cout<<"3 :Senior citizen Membership\n";
	cout<<"4 :Quit the program\n";
	cout<<"Enter your choice :";
	cin>>choice;
	if(choice>=1 && choice<=3)
	{
		cout<<"For how many months?:";
		cin>>months;
		switch(choice)
		{
			case1:
				charges=months*50.0;
				break;
			case2:
				charges=months*20.0;
			case 3:
				charges=months*30.0;
				break;
				
			
		}
		cout<<"The toatal charge are  RS "<<charges<<endl;
	
	}
		else if(choice!=4)
		{
					cout<<"The valid choice are 1 to 4\n";
				cout<<"Run the porgram again and slect one of these .";
		}
	
}

//write a program that will prompt the user to enter number of hour.It computes and display the number of weeks ,days,and hour within the input number of hour.
#include<iostream>
using namespace std;
int main()
{
	int hrs,w,d;
	cout<<"Enter number of hours : ";
	cin>>hrs;
	w=hrs/168;
	hrs=hrs%168;
	d=hrs/24;
	hrs=hrs%24;
	cout<<"weeks : "<<w<<endl;
	cout<<"days : "<<d<<endl;
	cout<"Hours : "<<hrs;
}

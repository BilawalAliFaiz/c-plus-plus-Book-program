//Write a program that gets the number and a letter. if the letter is f the program should treat the number entered as temperature in degrees Farenheight and convert it to the temperature in degree celcius and print a suitable message.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter an character :";
	cin>>ch;
	if(ch=='f')
	{
		float faren,cel;
		cout<<"Enter temperature in degree farenheight :"<<endl;
		cin>>faren;
		cel=(faren-32)*5/9;
		cout<<"Temperature in celcius is :";
		cout<<setprecision(3)<<cel;
		
	}
	else if(ch=='c')
	{
		float cel,faren;
	cout<<"enter temperature in clecius : "<<endl;
	cin>>cel;
	faren=9.0/5.0*cel+32;
	cout<<"temperture in farenheit is : ";
	cout<<setprecision(3)<<faren;
	}
	else
	{
		cout<<"invalid character :";
	}
}

//Senior selsperson is paid RS. 400 a week,and a junior salesperson is paid Rs.275 a week.
//Write a program that accept as input a salesperson's status in the character variabel status.
//If status is 'S' the junior person's salary should be discovered ;if status is 'j' or 'J' ,the junior person's should be displayed,otherwise display error message.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character :";
	cin>>ch;
	if(ch=='s'||ch=='S')
	{
	
	
	cout<<"You salary is RS 400";	
}
	else if(ch=='j'|| ch=='J')	
	{
	
		cout<<"Your salary is RS 275 :";
}
	else
{		
		cout<<"Invalid character";
}
}


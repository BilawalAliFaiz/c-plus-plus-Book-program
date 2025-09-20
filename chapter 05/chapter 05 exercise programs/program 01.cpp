//write a program that accept a character and determine wheteher character is a lowercase letter. A lowercase letter is any character that is greter than equall to 'A'and less than or equall to 'z'.If the enter charascter is lowercase letter ,display the message"Entered character is  a lowercase letter"otherwise display enter character is not lowercase letter .
#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter a character :";
cin>>ch;
if(ch>='a' && ch<='z')
{
	cout<<"Entered a character is lowercase letter  :";
}
else
{
	cout<<"Entered a character is not lowercase letter :";
}
	
}


//Write a program that allow the user to enter any character through the keyboard and determines whether it is a capital letter,small case letter,a digit number or a special symbol.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character :"<<endl;
	cin>>ch;
	if((ch>='A') && (ch<='Z') )
	cout<<"The character "<<ch<<" "<<"is a capital letter :"<<endl;
	else if ((ch>='a')&&(ch<='z'))
	cout<<"The character "<<ch<<" "<<"is a small case letter :"<<endl;
	else if ((ch>='0')&&(ch<=9))
	cout<<"The character "<<ch<<" "<<"is a digit :"<<endl;
	else
	cout<<"The character "<<ch<<" "<<" is a symbol."<<endl;
}




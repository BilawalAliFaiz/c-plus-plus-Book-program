//write a program that convert ASCII number to character and vice versa.The program should display the following menu.
//1.Convert ASCII vlaue to character
//2.Convert character to ASCII value
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

int number,option;
char letter;
cout<<"1. Convert ASCII value to character"<<endl;
cout<<"2.Convert character to ASCII value"<<endl;
cout<<"Enter your choice:";
cin>>option;
switch(option)
{
	case 1:
		cout<<"Enter a number :";
		cin>>number;
		cout<<"The corresponding character is :"<<char(number)<<endl;
		break;
	case 2:
		cout<<"Enter a letter :";
		cin>>letter;
		cout<<"ASCII value of the letter is :"<<int(letter)<<endl;
		break;
	default:
		cout<<"Invalid option:";
		break;
}
}

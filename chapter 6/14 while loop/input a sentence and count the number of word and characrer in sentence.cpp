//write a program that input a sentence from the user and count the number of words and character in sentence.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int countch=0;
	int countwd=1;
	cout<<"Enter a sentence :"<<endl;
	char ch='a';
	while(ch!='\r')
	{
		ch=getche();
		if (ch==' ')
		countwd++;
		else
		countch++;
		
	}
	cout<<"\nWord ="<<countwd<<endl;
	cout<<"characters = "<<countch-1<<endl;
	}

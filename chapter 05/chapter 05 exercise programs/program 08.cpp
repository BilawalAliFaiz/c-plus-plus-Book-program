//write a program that use the following categories of movies
#include<iostream>
using namespace std;
int main()
{
	cout<<"A for adventure movies :\n";
	cout<<"C for Commedy moviess :\n";
	cout<<"F for Family movies :\n";
	cout<<"H for Horror movies :\n";
	cout<<"s for Science Fiction movies\n";
	char ch;
	cout<<"Enter a character :";
	cin>>ch;
	if(ch=='A')
	{
		cout<<"Adventaure movies :";
	}
	else if(ch=='C')
	{
		cout<<"Comedy movies :";
	}
	else if (ch=='F')
	{
		cout<<"family movies :";
		
	}
	else if(ch=='H')
	{
		cout<<"Horror movies :";
	}
	else if(ch=='s')
	{
		cout<<"science Fiction movies :";
	}
}

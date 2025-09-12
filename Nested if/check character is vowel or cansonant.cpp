#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character :";
	cin>>ch;
	if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
	cout<<"You entered vowel :"<<ch;
	else
	cout<<"you entered a consonant :"<<ch;
}


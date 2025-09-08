//write a progeram that input name age and adress from the user and then display these values on the screen
#include<iostream>
#include<conio.h>
using namespace std;
 main()
{
	char name[25],city[30];
	int age;
	cout<<"enter your age : ";
	cin>>age;
	cout<<"enter your name : ";
	cin>>name;
	cout<<"enter your city : ";
	cin>>city;
	cout<<"\nyour first name is "<<name<<endl;
	cout<<"\nyour age is "<<age<<endl;
	cout<<"\nyour city name is "<<city<<endl;
}

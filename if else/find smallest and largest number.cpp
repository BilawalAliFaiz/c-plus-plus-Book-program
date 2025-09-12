//write a program that input five number .It find and print the largest and smallest number 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,max,min;
	cout<<"Enter an integer : ";
	cin>>a;
	cout<<"Enter an integer : ";
    cin>>b;
    cout<<"Enter an integer : ";
    cin>>c;
	cout<<"Enter an integer : ";
	cin>>d;
	cout<<"Enter an integer : ";
	cin>>e;	    
	min=max=a;
	if(b<min)
	min=b;
	if(c<min)
	min=c;
	if(d<min)
	min=d;
	if(e<min)
	min=e;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	if(d>max)
	max=d;
	if(e>max)
	max=e;
	cout<<"\nlargest number is :"<<max;
	cout<<"\nsmallest number is  :"<<min;
}

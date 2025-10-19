//write a program that input time in seconds and convert it into hh-mm-ss format.
#include<iostream>
using namespace std;
int main()
{
	int sec,s,h,m;
	cout<"Enter time in second : ";
	cin>>sec;
	h=sec/3600;
	sec=sec%3600;
	m=sec/60;
	s=sec%60;
	cout<<"\nHH-MM-SS="<<h<<":"<<m<<":"<<s;
}

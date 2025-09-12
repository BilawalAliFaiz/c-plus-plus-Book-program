#include<iostream>
using namespace std;
int main()
{
	int sub1,sub2,sub3;
	float avg;
	cout<<"Enter subject one number :";
	cin>>sub1;
	cout<<"Enter subject two number :";
	cin>>sub2;
	cout<<"Enter subject three number:";
	cin>>sub3;
	avg=(sub1+sub2+sub3)/3.0;
	if (avg>80)
	{
	cout<<"you are above standard and admission granted";
}
	
}

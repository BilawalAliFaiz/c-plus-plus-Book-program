//Write a program that input salary and grade. It adds 50% bonus if the grade is greater than 15.it adds 25% bonus if the grade is 15 or less than and then dispaly the total salary.
#include<iostream>
using namespace std;
int main()
{
	float salary,bonus;
	int grade;
	cout<<"Enter your salary:";
	cin>>salary;
	cout<<"enter your grade :";
	cin>>grade;
	switch(grade)
		{
			case 15:
				bonus=salary*50.0/100.0;
				break;
			case 16:
				bonus=salary*52.0/100.0;
				break;
			case 17:
				bonus=salary*54.0/100.0;
				break;
			case 18:
				bonus=salary*56.0/100.0;
				break;
			case 19:
				bonus=salary*58.0/100.0;
				break;
			case 20:
				bonus=salary*59.0/100.0;
				break;	
		}
	if(grade>15)
	{
	
	
		bonus=salary*50.0/100.0;
		salary=salary+bonus;
		cout<<"You new salary is :"<<salary<<endl;
	}
		
	
	else if(grade<15)
	{
	bonus=salary*25.0/100.0;
	salary=salary+bonus;
	cout<<"Your salary is RS : "<<salary<<endl;
}
  else 
  {
  
cout<<"invalid grade .Grade must be 20 or below :";
}
}

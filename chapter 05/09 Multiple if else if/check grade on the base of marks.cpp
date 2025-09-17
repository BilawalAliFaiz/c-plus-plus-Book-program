//write a program that input test score of a student and dispalay his grade according to following criteria.
//test score              grade
//>=90                    A
//80-89                   B
//70-79                   C  
//60-69                   D 
//below 60                F
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks : ";
	cin>>marks;
	if(marks>=90)
	{
		cout<<"Your grade is A :";
	}
	else if(marks>=80&&marks<=90)
	{
		cout<<"You grade is B :";
		
			}
	else if (marks>=70 && marks<=79)
	{
		cout<<"Your grade is C : ";
			}
	else if (marks>=60 && marks<=69)
	{
		cout<<"Your grade is D :";
					}
	else
	{
		cout<<"You are sida sida fail :";
									}								
  }  

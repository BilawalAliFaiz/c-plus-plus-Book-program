//write a program that input marks of a student and displays "pass"if marks are more than 40 adn "Fail" otherwise by using conditional operator. 
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks :";
	cin>>marks;
	cout<<"Result is "<<(marks>40 ? " : pass" : "Fail");
}



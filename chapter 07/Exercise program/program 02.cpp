//write a program that user to array to store roll no and marks of student.It input roll number and marks of five students and store them in corresponding elements of the arrays.This program finally displays the roll no and marks of the student with highest marks..
#include<iostream>
using namespace std;
int main()
{
	int rollno[5];
	int  marks[5];
	int highest_marks,highest_index;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter your rollno : ";
		cin>>rollno[i];
		cout<<"Enter your marks : ";
		cin>>marks[i];
		
	}
	highest_marks=marks[0];
	highest_index=0;
	for(int i=0;i<5;i++)
	{
		if(marks[i]>highest_marks)
		{
		
		highest_marks=marks[i];
		highest_index=i;
	}
	}
	cout<<"\nStudent highest marks: "<<endl;
	cout<<"Roll no "<<rollno[highest_index]<<endl;
	cout<<"Highest marks "<<highest_marks<<endl;
	
}

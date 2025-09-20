//write a program that contain an if statement that may be used to compute the area of a square (area=side*side)or a triangle (area=1/2*base*height)after promting the user to type the first character of the figure name (S or T)
#include<iostream>
using namespace std;
int main()
{
	int area_of_square,area_of_triangle,side1,side2,base,height;
	char ch;
	cout<<"Enter an integer :";
	cin>>ch;

	if(ch=='S')
	{
	cout<<"Enter side 1 :";
	cin>>side1;
	cout<<"Enter side 2:";
	cin>>side2;
		area_of_square=side1*side2;
		cout<<"Area of square ="<<area_of_square;
	}
	else if(ch=='T')
	{
		cout<<"Enter base of triangle :";
		cin>>base;
		cout<<"Enter height of triangle :";
		cin>>height;
		area_of_triangle=base*height*1/2;
		cout<<"Area of triangle ="<<area_of_triangle;
	}
	else
	{
		cout<<"Invalid character :";
	}
}


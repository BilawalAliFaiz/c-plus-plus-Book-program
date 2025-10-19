//write a progrma that input devidend and deviser .it then calculate and display the quotient and reaminder.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int dev,div,q,r;
	cout<<"enter devidend and devisor : ";
	cin>>dev>>div;
	q=dev/div;
	r=div%dev;
	cout<<"qoutient ="<<q<<endl;
	cout<<"remainder ="<<r<<endl;
}

//write a protgram that input an even and odd number through keyboard,multiple even with 5 and odd with 3 and adds both results. It subtract the result from 1000 and finally print the diference
#include<iostream>
using namespace std;
int main()
{
	int even,odd,r;
	cout<<"Enter an even number : ";
	cin>>even;
	cout<<"Enter an odd number : ";
	cin>>odd;
	r=1000-((even*5)+(odd*3));
	cout<<"Differnce ="<<r;
}

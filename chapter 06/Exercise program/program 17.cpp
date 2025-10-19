//write a program to print the following sequence.8,12,17,24,,28,33,...100
#include<iostream>
using namespace std;
int main()
{
	int n=8,a;
	while(n<=100)
	for(a=4;a<=6;a++)
	{
		cout<<n<<" ";
		n=n+a;
	}
	return 0;
}


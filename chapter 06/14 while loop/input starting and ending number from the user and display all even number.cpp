//write a program that input starting and ending number from the user and display all even number in given range using while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,starting_num,ending_num;
	cout<<"Enter starting number :";
	cin>>starting_num;
	cout<<"Enter ending number :";
	cin>>ending_num;
	n = starting_num;
	while(n<=ending_num)
	{
		if(n%2==0)
		
			cout<<n<<endl;
			n++;
		
	}
}


//write a program that use a while loop to enter number from the user and then displays it.The loop is terminated when the user enter-1.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	n=1;
	while(n!=-1)
	{
		cout<<"Enter a number :";
		cin>>n;
		cout<<"You typed "<<n<<endl;
		
	}
	cout<<"End of program ";
}


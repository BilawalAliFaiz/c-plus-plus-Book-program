//write a progrma that enter a number from the user using for loop.
//if the number is greater than zero it is displayed and next number is input.
//The program exit the loop if the number is zero or negative using break statement.
#include<iostream>
using namespace std;
int main()
{
		int n,x;

	for(x=1;x=5;x++)
	{
	cout<<"Enter a number :";
	cin>>n;
		if(n<=0)
		break;
		cout<<"You typed "<<n<<endl;
	}
}




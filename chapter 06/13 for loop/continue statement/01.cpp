//write a progrma that enter a number from the user using for loop.
//It display the number if it is greater than zero otherwise it inputs next number using continue statement.
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
		continue;
		cout<<"You typed "<<n<<endl;
	}
}



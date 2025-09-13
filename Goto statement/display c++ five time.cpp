//write a program that display five time "c++"using goto statemetn.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=1;
	loop:
	cout<<n<<" : c++"<<endl;
	n++;
	if (n<=5) goto loop;
	cout<"End of program :";
}

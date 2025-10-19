//write a program to display the diamond of asteriks using loop.
#include<iostream>
using namespace std;
int main ()
{
		
	for(int i=9;i>1;i--)
	for(int i=1;i<9;i++)
	{
		for(int j=0;j<i;j++)
		{
		cout<<" ";	
		}
		for(int k=i;k<9;k++)
		{
			cout<<"* ";
		}
	
	cout<<endl;

}
}




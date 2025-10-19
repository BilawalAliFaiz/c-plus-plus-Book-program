#include<iostream>
using namespace std;
int main ()
{
		
	for(int i=9;i>1;i--)
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
			int rows=9;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<i;j++)
		{
		cout<<" ";	
		}
		for(int k=i;k<rows;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
}

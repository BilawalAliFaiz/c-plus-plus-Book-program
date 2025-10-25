#include<iostream>
using namespace std;
int main()
{
	int i,j,min,max;
	int arr[2][4]={{12,45,34,23,},{34,56,78,89}};
	max=min=arr[0][0];
	for(i=0;i<2;i++)
	for(j=0;j<4;j++)
	{
		if(arr[i][j]>max)
		max=arr[i][j];
		if(arr[i][j]<min)
		min=arr[i][j];
	}
	cout<<"Maximum "<<max<<endl<<"Minimum"<<"="<<min<<endl;
}

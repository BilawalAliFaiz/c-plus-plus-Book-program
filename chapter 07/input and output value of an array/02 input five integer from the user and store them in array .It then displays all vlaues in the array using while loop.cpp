//write a program that input five integers from the user and store them in an array.It then displays all values in the array using loops.
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter an integer :";
		cin>>arr[i];
	}
	cout<<"The values in array are :\n";
	for(i=0;i<5;i++)
	cout<<arr[i]<<endl;
}

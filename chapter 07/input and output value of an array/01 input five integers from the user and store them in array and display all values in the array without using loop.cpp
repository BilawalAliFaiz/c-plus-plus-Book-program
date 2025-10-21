//write a program that input five integers from the user and store them in array .It then displays all vaues in the array without using loop.
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter five integers :"<<endl;
	cin>>arr[0];
	cin>>arr[1];
	cin>>arr[2];
	cin>>arr[3];
	cin>>arr[4];
	cout<<"The values in array are :\n";
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;
	cout<<arr[3]<<endl;
	cout<<arr[4]<<endl;
}

#include<iostream>
using namespace std;
int main()
{
	int vehicle;
	cout<<" 1 :M =   Motorcycle :\n";
	cout<<" 2 :C =   Car    \n";
	cout<<" 3 :B =   Bus ";
	cout<<"Which vehicle you park :\n";
	cin>>vehicle;
	switch(vehicle)
	{
		case 1:
			cout<<"Motorcycle =        RS.10 per day :";
			break;
		case 2:
				cout<<"Car =        RS.20 per day :";
				break;
		case 3:
			cout<<"Bus =        RS.30 per day :";
		     	break;	
	}
}

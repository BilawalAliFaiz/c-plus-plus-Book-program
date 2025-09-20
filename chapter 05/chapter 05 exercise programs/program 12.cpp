#include<iostream>
using namespace std;
int main()
{
	int hour;
	string period,minute;
	cout<<"Enter time in format HH:MM "<<endl;
	cin>>hour>>minute;
	period=(hour>=12)?"PM":"AM";
	cout<<"Miltary time HH : MM : Period "<<endl;
	cout<<"\t     "<<hour<<" : "<<minute<<" : "<<period<<endl;
	
	if(hour==0)
	{
		hour=12;
	}
	else if(hour>12)
		{
			hour=hour-12;
			
		}
		cout<<"Standard time HH : MM : Period "<<endl;
		cout<<"\t     "<<hour<<" : "<<minute<<" : "<<period<<endl;
	}

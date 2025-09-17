//write a porgram that will promt the user to enter number of hour.it computes and display the number of weeks dyas and hour within the input number of hour

#include<iostream>
using namespace std;
int main()
{
int hrs,num_of_week,days,hour;
cout<<"Enter a number of hours : ";
cin>>hour;
num_of_week=hour/168;
hrs=hour%168;
days=hour/24;
hrs=hour%24;
cout<<"Weeks =:"<<num_of_week<<endl;
cout<<"Days=:"<<days<<endl;
cout<<"Hours=:"<<hour;
}

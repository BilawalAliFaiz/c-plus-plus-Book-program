//write a program to display the values of different variable using setfill mainpulator.
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{

char str[]="opp using c++";
cout<<setw(20)<<setfill('*')<<str<<endl;
cout<<setw(20)<<setfill('@')<<str<<endl;
cout<<setw(20)<<setfill('=')<<str<<endl;
}

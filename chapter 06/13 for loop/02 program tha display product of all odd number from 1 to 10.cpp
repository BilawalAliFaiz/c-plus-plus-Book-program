//write a progrma that displays product of all odd number from 1 to 10 using while loop.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long int product=1;
int c;
for (c=1;c<=10;c=c+2)
product *=c;
cout<<"Result is ="<<product;	
}



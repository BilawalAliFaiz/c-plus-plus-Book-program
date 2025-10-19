//write a program that display the following series using do-while loop.
#include<iostream>
using namespace std;
int main()
{
int m,n;
m=5;
do{
n=m;
do{
	cout<<m<<"\t";
	n--;
}

while(n>=0);


cout<<endl;
m--;	

}
while(m>=0);
}


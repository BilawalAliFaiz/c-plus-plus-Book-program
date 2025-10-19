//write a program that claculate the electricity bill.The rates of electricity per unit are as follows.
//If the unit consumed are <=300,then the cost is RS . 2 per unit.
//if the unit consumed are >300 and <=500,then the cost is RS.5 per unit.
//if the unit consumed exceed 500 then the cost per unit is RS .7
#include<iostream>
using namespace std;
int main()
{
	int units;
	float bill;
	cout<<"Enter units consumed :";
	cin>>units;
	if (units > 500)
	bill=units*7;
	else if(units >300)
	
		bill=units*5;
	
	else 
	bill=units*2;
	bill=bill+150;
	if(bill>2000)
	
		bill=bill+(bill*5.0/100.0);
		cout<<"Total bill ="<<bill;
	
}

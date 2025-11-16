//write a program that uses three arrays,mango,orange and banana to store the number of fruit parchased by coustomer.
//The program input the number of mangoes,oranges and banana to be parchased by coustomer and store them in corresponding arryays.
//The program finally displays the total bill of each coustomer according to the following prices.
//RS : 20 per mango
//Rs : 10 per orange
//RS : 5 per  banana
//The output should appera as follow.
//-------------------------------------------------------------------------------------------------------------------
//Coustomer no .                    Mangoes.                  Bananas.          oranges.                   Total bill
//-------------------------------------------------------------------------------------------------------------------
//1                                   5                         10                 12                          260
#include<iostream>
using namespace std;
int main()
{
const int size=3;
int mango[size],orange[size],banana[size];
int mango_price=20,orange_price=10,banana_price=5;
for(int i=0;i<size;i++)
{
	cout<<"Enter for coustomer NO : "<<i+1<<endl;
	cout<<"Number of mangoes : ";
	cin>>mango[i];
	cout<<"Number of orange : ";
	cin>>orange[i];
	cout<<"Number of bananas : ";
	cin>>banana[i];
}
cout<<"\n______________________________________________________________________________________________________"<<endl;
cout<<"Coustomer NO:\tMangoes:\tOranges:\tBananas:\tTotal bill :";
cout<<"\n____________________________________________________________________________________________________"<<endl;
for(int i=0;i<size;i++)
{
	int total=(mango[i]*mango_price)+(orange[i]*orange_price)+(banana[i]*banana_price);
	cout<<i+1<<"\t\t";
	cout<<mango[i]<<"  \t\t";
	cout<<banana[i]<<"  \t\t";
	cout<<orange[i]<<"  \t\t";
	cout<<total<<endl;	
}
}


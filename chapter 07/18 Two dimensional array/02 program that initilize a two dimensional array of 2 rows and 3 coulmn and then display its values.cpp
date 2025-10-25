//write a program that initilize a two dimensional array of 2 rows and 3 coulmn and then display its value.
#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[2][3]={15,21,9,45,67,56};
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<"\t";
		cout<<endl;
 	}
}

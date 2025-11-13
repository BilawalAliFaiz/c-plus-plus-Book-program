//write a program that four arrays numbers ,squares, cubes and sum each consisting of 10 element.The number array store the value of its
//indexes ,the square array store the square of its idexes ,the cube array store the value of its indexes and the sum array stores the 
//sum of corresponding indexes of three arrays.The program should dispalys the value of sum array and the total of all values in sum array .
#include<iostream>
using namespace std;
int main()
{
const int size=10;
int number[size],square[size],cube[size],sum[size];
int total=0;
for(int i=0;i<size;i++)
{
	number[i]=i;
	square[i]=i*i;
	cube[i]=i*i*i;
	sum[i]=number[i]+square[i]+cube[i];
	total+=sum[i];
}
cout<<"Index\tNumber\tSquare\tcube\tsum \n";
cout<<"-------------------------------------\n";
for(int i=0;i<size;i++)
{
   cout << i << "\t" <<number[i] << "\t" << square[i]
             << "\t" << cube[i] << "\t" << sum[i] << endl;
         }
         cout<<"\nTotal vlaues in sum are : "<<total<<endl;
}



#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int date,month,year;
	system ("color 4");
	cout<<"\n\n\t\t\tEnter **** Date **** mnonth and Year:\n";
         	cin>>date;
	        cin>>month;
         	cin>>year;
	cout<<"\t\t\tToday is your birthday\n";
	string name="Bilawal Ali faiz ";
	string message="\n\n\t.\t.     .\t\t.......\t.......\t     .     .\t........\t.\t.....\t......\t.     .\n\t.\t.    .  .\t.     . .     .      .    .\t.      .\t.\t.   .\t   .\t.     . \n\t.........   .   .\t....... .......      .   .\t........     \t.\t.....\t   .\t.......\n\t.\t.   .   .\t.       .              .\t.      .\t.\t.  .\t   .\t.     .\n\t.\t.   .....\t.       .             .\t\t........\t.\t.    .\t   .\t.     .\n\t.\t.   .\t.       .       .            .\n\t.\t.   .   .\t.       .           .\t\t\n\n\t\t\t\t\t\t\t......\t  .\t.     .\t\n\t\t\t\t\t\t\t.    .\t . .     .   .\n\t\t\t\t\t\t\t.    .\t .  .      .\n\t\t\t\t\t\t\t.    .   ....      .\n\t\t\t\t\t\t\t......   .  .      ."+name;
	cout<<"\n";
	for (int i = 0; i < message.size(); i++)
	{
		cout<<message[i];
		Sleep(50);
	}
	cout<<endl;
}

//Write a program that input character form user and check whether it is vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter an alphabet : ";
	cin>>c;
	switch(c)
	{
		case 'a':
		case 'A':
	    	cout<<"You enter vowel :";
	    	break;
		break;
		case 'e':
		case 'E':
	    	cout<<"You entered vowel :"	;
	    	break;
		case 'i':
		case 'I':
			cout<<"You entered vowel :"	;
			break;
		case 'o':
		case 'O':
		    cout<<"You entered vowel :"	;
		    break;
		case 'u':
		case 'U':
			cout<<"You entered vowel :"	; 
			break;
		default :
			cout<<"You entered consonant :";
			break;				
	}
}

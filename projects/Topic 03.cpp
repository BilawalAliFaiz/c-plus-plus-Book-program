
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int choice,amount,balance=10000,widraw;
	do
	{
	
	int pin=1234;
	cout<<"\n======================================"<<endl;
	cout<<"                 "<<"ATM Machine";
	cout<<"\n====================================";
	cout<<"\nWelcome to code bank ATM ";
	cout<<"\nEnter your four digit pin :";
	cin>>pin;

	
	
	
	if(pin=1234)
	{
	
cout<<"\n========= ATM MENU =========";
cout<<"\n1. Check Balance";
cout<<"\n2. Deposit Money";
cout<<"\n3. Withdraw Money";
cout<<"\n4. Show Transaction Summary";
cout<<"\n5. Exit";
}
	else
	{
	
	cout<<"Invalid Pin ";
}

cout<<"\nEnter your choice :";
cin>>choice;
switch(choice)
{
	case 1:
		cout<<"\nCheck balance :"<<endl;
		cout<<"\nYour account balance is  "<<balance;
		break;
	case 2:
	    cout<<"\nEnter amount for deposit :";
	    cin>>amount;
	    cout<<"\nDeposit   sucesfully  "<<endl;
	    cout<<"You deposit amount : "<<amount;
	    break;
	    case 3:
	    	cout<<"\nEnter amount for widraw money";
	    	cin>>widraw;
	    	if(widraw<balance)
	    	{
	    	cout<<"Widraw sucessfully"<<endl;
	    	cout<<"You widraw "<<widraw;
	    }
	    else
	    {
	    	cout<<"\nInsufficent blance";
		}
	    	break;
	    case 4:
	 cout<<"===================Transaction summary=====================\n";
	 cout<<"No"<<setw(15)<<"type"<<setw(15)<<"Amount"<<endl;
	 cout<<choice<<setw(15) <<"Deposit"<<setw(15)<<amount<<endl;
	 cout<<choice<<setw(15)<<"Widraw"<<setw(15)<<widraw;  
	 break;	
	 case 5:
	 	cout<<"Exit\n";
	 	cout<<"\nThanku for using code bank ATM :";
	    	
	    	
		    
}	
	
}
while(choice !=5);

	
}

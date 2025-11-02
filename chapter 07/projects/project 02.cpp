#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int arr[10],i,j,temp,user,start,end,search_number,loc=-1,mid,k,high,ch,max,min;
	int entered = false;
	do
	{
  cout << "\n\n\n=====: MAIN MENU :=====" << endl;
        cout << "1: Enter product prices" << endl;
        cout << "2: Display all product prices" << endl;
        cout << "3: Sort prices (Ascending - Bubble Sort)" << endl;
        cout << "4: Search for a product price" << endl;
        cout << "5: Find Highest and Lowest price" << endl;
        cout << "6: Exit" << endl;
        cout << "\n=====: CHOICE OPTION =====:" << endl;
   cout<<"\n\nEnter your choice :"<<endl;
   cin>>ch;
   switch(ch)
   {
   	case 1:
   	cout<<"Enter the price of product : "<<endl;
	for(i=0;i<10;i++)
			for(i=0;i<10;i++)
			{
		cout << "Product " << i + 1 << ": ";
		cin>>arr[i];
	}
	entered=true;
	
	cout<<"\nprices stored succesfully : ";
	Sleep(2000);
   	system("cls");
	break;
	case 2:
		if(!entered )
		{
		cout << "Please enter prices first!" << endl;
		Sleep(2000);
   		system("cls");
		}

		else
		{
		
	cout<<": original prices of product are :"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	Sleep(2000);
   	system("cls");
   }
	break;
	case 3:
		if(!entered)
		{
			cout << "Please enter prices first!" << endl;
		Sleep(2000);
   		system("cls");
		}
	
		else
		{
		
		cout<<"\n\nTHE SORTED PRICES ARE :\n";
	
	 
	for(i=0;i<10;i++)
	
		for(j=0;j<10-1;j++)
		
			if(arr[j]>arr[j+1])
			{
			
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
			
		
	 

	 cout<<"\n:=====ACCENDING ORDER =====:\n";
	 cout<<"The array in accending are : \n";
	 for(i=0;i<10;i++)
	 {
	 	cout<<arr[i]<<" ";
	  }
	Sleep(2000);
   	system("cls");
   }
	break;
	case 4:
		if(!entered)
		{
			cout << "Please enter prices first!" << endl;
		Sleep(2000);
   		system("cls");
		}

		else
		{
		
	  	  cout<<"\n:=====SEARCH OPTION =====:";
	   	cout<<"\nDo  you  want to search the number :(0 for No and 1 for yes :) \n";
	  	cin>>user;
	  while(user !=0)
	  {
	  cout<<"\n If you want to cancel, press 0 otherwise, press any other number.\n";
	  cin>>user;
	  if(user==0)
	  break;
	  			start=0;
	        end=10-1;
		cout<<"\nEnter price  for search : \n";
		cin>>search_number;
		while(start<=end)
		{
		mid=(start+end)/2;
		
		if(arr[mid]==search_number)
		{
		
		
			loc=mid;
		
			break;
		}
			
		else if (search_number<arr[mid])
		{
		
		
		end=mid-1;
	
	}
		
		 else
		 
		start=mid+1;

					
		}
		if(loc==-1)
		cout<<"price  not found : ";
		else 
		cout<<"price found at index : "<<loc; 
}
	Sleep(2000);
   	system("cls");
   }
	break;
	case 5:
		if(!entered)
		{
			cout << "Please enter prices first!" << endl;
		Sleep(2000);
   		system("cls");
		}
	
		else
		{
		
	max=arr[0];
	for(i=0;i<10;i++)
	if(max <arr[i])
	max=arr[i];
	cout<<"Highest price ="<<max;
	min=arr[0];
	for(i=0;i<10;i++)
	if(min >arr[i])
	min=arr[i];
	cout<<"\nSmallest price ="<<min;
	Sleep(2000);
   	system("cls");
   }
   	break;
   	case 6:
   		cout<<"Exit:";
   		Sleep(2000);
   		system("cls");
   		break;
   	default :
            cout << "Invalid choice! Try again." << endl;
            Sleep(2000);
            system("cls");
            break;
}


}
while(ch!=6);
system("cls");
}


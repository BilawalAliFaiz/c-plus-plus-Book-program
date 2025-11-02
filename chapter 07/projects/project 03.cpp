#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int i,j,n,temp,user,start,end,search_number,loc=-1,mid,k,high,ch,max,min;
	int sum=0;
	float avg;
	int arr[n];
	int entered=false;
	do
	{
  cout << "\n\n\n=====: MAIN MENU :=====" << endl;
        cout << "1: Ask the user how many number they want to enter :" << endl;
        cout << "2: Display all number :" << endl;
        cout << "3: Sort the number in accending order using slection sort :" << endl;
        cout << "4: Allow the user to search for a number using sequential search :" << endl;
        cout<<  "5: Find and display the smallest and largest number :"<<endl;
        cout << "6: Display the sum and average of all the number :" << endl;
        cout << "7: Exit" << endl;
        cout << "\n=====: CHOICE OPTION =====:" << endl;
   cout<<"\n\nEnter your choice :"<<endl;
   cin>>ch;
   switch(ch)
   {
   	case 1:
   	cout<<"How many number You  want to enter : : "<<endl;
   	cin>>n;
	for(i=0;i<n;i++)
			for(i=0;i<n;i++)
			{
		cout << "Number : " << i + 1 << ": ";
		cin>>arr[i];
	}
	entered=true;
	
	
	cout<<"\Number  stored succesfully : ";
	Sleep(2000);
   	system("cls");
	break;
	case 2:
		if(!entered)
		{
   		cout<<"Please enter number first :";
		Sleep(2000);
   		system("cls");
   }
   else
	{
	cout<<": Original number  are :"<<endl;
	for(i=0;i<n;i++)
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
			cout<<"Please enter number first :";
		Sleep(2000);
   		system("cls");
		}
		else

		{
		
	  	cout<<"\nThe sorted number  are :"<<endl;
	  cout<<"\n:=====ACCENDING ORDER =====:";
	  cout<<"\nThe number  in Accending order  are : \n";
	  	for(i=0;i<n;i++)
	  	{
	    min=i;
	    for(j=i+1;j<n;j++)
	    if(arr[j]<arr[min])
	    min=j;
	    if(min!=i)
	    {
	    	temp=arr[i];
	    	arr[i]=arr[min];
	    	arr[min]=temp;
	    	
		}
	}
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		Sleep(3000);
			system("cls");
		}

	break;
	case 4:
		if(!entered)
			{
			cout<<"Please enter number first :";
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
		cout<<"\nEnter number  for search : \n";
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
		cout<<"Number  not found : ";
		else 
		cout<<"Number found at index : "<<loc; 
}

	Sleep(2000);
   	system("cls");
   }
   
	break;
	case 5:
		if(!entered)
		{	
		cout<<"Please enter number first :";
		Sleep(2000);
   		system("cls");
		
		}
		else
	
		{
		
	max=arr[0];
	for(i=0;i<n;i++)
	if(max <arr[i])
	max=arr[i];
	cout<<"Highest number ="<<max;
	min=arr[0];
	for(i=0;i<n;i++)
	if(min >arr[i])
	min=arr[i];
	cout<<"\nSmallest number  ="<<min;
	Sleep(2000);
   	system("cls");
   }
   
   	break;
   	case 6:
 	if(!entered)
 	{
	
 	 	cout<<"Please enter number first : ";
 		Sleep(2000);
   		system("cls");
   	}
else
 {
 
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		
	}
	avg=sum/n;
	cout<<"Sum     ="<<sum<<endl;
	cout<<"Average = "<<avg<<endl;
	Sleep(2000);
   	system("cls");
   }

	break;
	case 7:
	cout<"Exit :";
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
while(ch!=7);
system("cls");
}

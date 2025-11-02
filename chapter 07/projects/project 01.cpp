#include<iostream>
#include <windows.h>
using namespace std;
int main()
{
	int i,j,n,temp,min,mid,loc=-1,start,end,search_number,ch;
	int user;
	int t,search;
	int arr[n];
	int entered=false;
	do
	{

	
	cout<<"\n\n\n=====: MAIN MENU :====="<<endl;
	cout<<"1:How many students marks do you want to enter :"<<endl;
	cout<<"2:Enter student marks :"<<endl;
	cout<<"3:Display origianl marks :"<<endl;
	cout<<"4:Sort marks accending (Bubble sort)"<<endl;
	cout<<"5:Search for marks (sequential search :)"<<endl;
	cout<<"6:Sort marks decending (Slection marks)"<<endl;
	cout<<"7:Search for marks (binary search - only on accending order) :"<<endl;
	cout<<"8 Exit"<<endl;
    cout<<"\n=====:CHOICE OPTION=====:"<<endl;	
	cout<<"Enter your choice :";
	cin>>ch;
	switch(ch)
	{
	

    case 1:
	cout<<"How many student are there  :";
	cin>>n;
	entered=true;
	cout<<" Value stored succesfully   :\n";
	Sleep(2000);
   	system("clear");
	break;
  
	case 2:
    if(!entered)
    {
    	cout<<"Please entered values first : ";
    Sleep(2000);
   	system("clear");
	}
	else
    {
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter marks of student : ";
		cin>>arr[i];
		entered =true; 
	
	}
	cout<<"All marks entered  :";
	Sleep(3000);
	system("cls");
}
	break;
	case 3:
	 if(!entered)
	 {
	 	cout<<"Please entered values first : ";
	Sleep(2000);
   	system("cls");
	 }
	 else
	 {
	 
	cout<<"\nTHE ORIGINAL VALUES ARE  :"<<endl;
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
	cout<<"Please entered values first :";
	Sleep(3000);
	system("cls");
}
else
{

	
	cout<<"\n\nTHE SORTED VALUE ARE :\n";
	
	 
	for(i=0;i<n;i++)
	
		for(j=0;j<n-1;j++)
		
			if(arr[j]>arr[j+1])
			{
			
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	 cout<<"\n:=====ACCENDING ORDER =====:\n";
	 cout<<"The array in accending are : \n";
	 for(i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	  } 
	Sleep(3000);
		system("cls");
	}
	  break;
	  case 5:
	  	if(!entered)
{
	cout<<"Please entered values first :";
	Sleep(3000);
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
	        end=n-1;
		cout<<"\nEnter student marks for search : \n";
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
		cout<<"Marks  not found : ";
		else 
		cout<<"Marks found at index : "<<loc;
	}
	Sleep(3000);
		system("cls");
	}
	break;
	  case 6:
	  	if(!entered)
{
	cout<<"Please entered values first :";
	Sleep(3000);
	system("cls");
}
else
{

	  	cout<<"\nThe sorted values are :"<<endl;
	  cout<<"\n:=====DECENDING ORDER =====:";
	  cout<<"\nThe array in decending are : \n";
	  	for(i=0;i<n;i++)
	  	{
	    min=i;
	    for(j=i+1;j<n;j++)
	    if(arr[j]>arr[min])
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
	case 7:
			if(!entered)
{
	cout<<"Please entered values first :";
	Sleep(3000);
	system("cls");
}
else
{

		
	cout<<"\nEnter marks  to find :";
	cin>>search;
	for(t=0;t<n;t++)
	if(arr[t]==search)
	loc=t;
	if(loc==-1)
	cout<<"marks  not found in array :";
	else
	cout<<"marks found in array :"<<loc;
	Sleep(1000);
	system("cls");
}

		break;
        default:
        cout << "Invalid choice! Try again.\n";
         Sleep(2000);
         	system("cls");
         	break;
}
}
while(ch!=8);
 system("cls");
return 0;



}




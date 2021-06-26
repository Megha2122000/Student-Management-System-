#include<iostream>
using namespace std;
string arr1[20] , arr2[20] , arr3[20] , arr4[20] , arr5[20];
int total=0;
void enter()
{
	int choice;
	cout<<"how many students do you want to enter :";
	cin>>choice;
	if(total==0)
	{
		total=total+choice;
		for(int i=0; i<choice;i++)
	{
		cout<<"Enter data of student:"<<i+1<<endl<<endl;
		cout<<"Enter Name :";
		cin>>arr1[i];
		cout<<"Enter rollno :";
		cin>>arr2[i];
		cout<<"Enter course :";
		cin>>arr3[i];
		cout<<"Enter class :";
		cin>>arr4[i];
		cout<<"Enter contact :";
		cin>>arr5[i];
	}
	}
	else
	{
		for(int i=total; i<total+choice;i++)
	{
		cout<<"Enter data of student:"<<i+1<<endl<<endl;
		cout<<"Enter Name :";
		cin>>arr1[i];
		cout<<"Enter rollno :";
		cin>>arr2[i];
		cout<<"Enter course :";
		cin>>arr3[i];
		cout<<"Enter class :";
		cin>>arr4[i];
		cout<<"Enter contact :";
		cin>>arr5[i];
	}	
total =	total+choice;
	}
}
void show()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
	
	for(int i=0;i<total;i++)
	{
		cout<<"Data of Student:"<<i+1<<endl<<endl;
		cout<<"Name :"<<arr1[i]<<endl<<endl;
		cout<<"Roll No :"<<arr2[i]<<endl<<endl;
		cout<<"Course :"<<arr3[i]<<endl<<endl;
		cout<<"Class :"<<arr4[i]<<endl<<endl;
		cout<<"Contact :"<<arr5[i]<<endl<<endl;
	}
}
}
void search()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
	string rollno;
	cout<<"Enter roll no of student which you want to search:";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
				cout<<"Data of Student:"<<i+1<<endl<<endl;
				cout<<"Name :"<<arr1[i]<<endl<<endl;
				cout<<"Roll No :"<<arr2[i]<<endl<<endl;
				cout<<"Course :"<<arr3[i]<<endl<<endl;
				cout<<"Class :"<<arr4[i]<<endl<<endl;
				cout<<"Contact :"<<arr5[i]<<endl<<endl;
		}
	}
}
}
void update()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
	string rollno;
	cout<<"Enter roll no of student which you want to search:";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
				cout<<"Previous data"<<endl<<endl;
				cout<<"Data of Student:"<<i+1<<endl<<endl;
				cout<<"Name :"<<arr1[i]<<endl<<endl;
				cout<<"Roll No :"<<arr2[i]<<endl<<endl;
				cout<<"Course :"<<arr3[i]<<endl<<endl;
				cout<<"Class :"<<arr4[i]<<endl<<endl;
				cout<<"Contact :"<<arr5[i]<<endl<<endl;
				cout<<"\nEnter new data"<<endl;
				cout<<"\n Enter Name :";
				cin>>arr1[i];
				cout<<"\n Enter Roll NO :";
				cin>>arr2[i];
				cout<<"\n Enter Course :";
				cin>>arr3[i];
				cout<<"\n Enter Class :";
				cin>>arr4[i];
				cout<<"\n Enter Contact :";
				cin>>arr5[i];
		}
	}
}
}
void deleterecord()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
	int a;
	cout<<"Press 1 to delete full record"<<endl;
	cout<<"Press 2 to delete specific record"<<endl;
	cin>>a;
	if(a==1)
	{
		total=0;
		cout<<"All records is deleted";
	}
	else
	{
		string rollno;
		cout<<"Enter rollno which you want to delte"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				for(int j=i;j<total;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
					
				}	
				total--;
				cout<<"Your required record is deleted..!!"<<endl;				
			}	
		} 
	}
}
}
main()
{
	int value;
	while(true)
	{
		cout<<"Press 1 to enter data"<<endl;
		cout<<"Press 2 to show data"<<endl;
		cout<<"Press 3 to search data"<<endl;
		cout<<"Press 4 to update data"<<endl;
		cout<<"Press 5 to delete data"<<endl;
		cout<<"Press 6 to exit data"<<endl;
		cin>>value;
		switch(value)
		{
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
				search();
				break;
			case 4:
				update();
				break;
			case 5:
				deleterecord();
				break;
			default: 
				cout<<"invalid output"<<endl;
				break;
		}
	}
	
}

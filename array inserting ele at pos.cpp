#include<iostream>
using namespace std;

main()
{
	int arr[5],i,n,ele,loc;
	cout<<"enter size of ana array :";
	cin>>n;
	cout<<"enter the array elements";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"inserted array elements are ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
	
	cout<<"enter the element to insert :";
	cin>>ele;
	
	cout<<"enter the location in array :";
	cin>>loc;
	
	if(loc>n)
	{
		cout<<"enter location less then size of an array";
	}
	else
	{
		for(i=n-1;i>=loc;i--)
		{
			arr[n-1]=arr[i];
		}
		arr[loc]=ele;
	}
	cout<<"updated array elements are :";
	for(i=0;i<6;i++)
	{
		cout<<arr[i];
	}
}
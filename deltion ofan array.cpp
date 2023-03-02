#include<iostream>
using namespace std;

main()
{
	int n,arr[5],loc,i;
	cout<<"enter array size "<<endl;
	cin>>n;
	
	cout<<"enter array elements :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"inserted array elements are"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
	cout<<"enter location to delete element :";
	cin>>loc;
	
	for(i=loc;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
}
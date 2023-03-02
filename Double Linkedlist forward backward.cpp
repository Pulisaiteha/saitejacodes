#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
	node *prev;
	
	node(int val)
	{
		data=val;
		next=NULL;
	}
	
};
main()
{
	node *ptr1=new node(1);
	node *ptr2=new node(2);
	node *ptr3=new node(3);
	
	node *head;
	head=ptr1;
	
	ptr1->next=ptr2;
	ptr2->next=ptr3;
	
	node *temp;
	temp=head;
	cout<<"This is forward only i.e, single linkedlist"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	node *tail;
	tail=ptr3;
	ptr3->prev=ptr2;
	ptr2->prev=ptr1;
	
	node *temp2;
	temp2=tail;
	cout<<endl<<"This is backward i.e, double linkedlist"<<endl;
	while(temp2!=NULL)
	{
		cout<<temp2->data<<"->";
		temp2=temp2->prev;
	}
	ptr1->prev=ptr3;
	ptr3->next=ptr1;
	
    ptr1->prev=ptr3;
    ptr3->prev=ptr3;
	ptr2->prev=ptr1;
	
	node *head3;
	head3=ptr1;
	node *temp3;
	 
	while(temp3!=NULL)
	{
	 cout<<temp3->data;
	 temp3=temp3->prev;
 
	 
	}
	
}
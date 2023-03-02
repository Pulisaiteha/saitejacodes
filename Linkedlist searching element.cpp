#include<iostream>
using namespace std;

 class linkedlist
 {
 	public:
  	int data;
 	linkedlist *next;

	 linkedlist(int val)
	 {
	 	data=val;
	 	next=NULL;
	 }
};
 main()
 {
 
 	int ele;
 	linkedlist *ptr1=new linkedlist(10);
 	linkedlist *ptr2=new linkedlist(20);
 	linkedlist *ptr3=new linkedlist(30);
 	linkedlist *ptr4=new linkedlist(40);
 
 	linkedlist *head;
 	head=ptr1;
 	 
 	ptr1->next=ptr2;
 	ptr2->next=ptr3;
 	ptr3->next=ptr4;
 	ptr4=NULL;
 	
 	
 linkedlist *temp;
	 temp=head;
	 while(temp!=NULL)
	 {
	 	cout<<temp->data<<"->";
	 	temp=temp->next;
	 }
	 cout<<endl<<"enter element to search :";
	 cin>>ele;
     temp=head;
   while(temp->next!=NULL)
   {
 
   	if(ele==temp->data)
   	{
   	cout<<endl<<"the searched element is :"<<ele;
    }
   else
   {
 // 	cout<<endl<<"enter elements which are in the list ";
   }
 temp=temp->next;
 
}
 	
 }
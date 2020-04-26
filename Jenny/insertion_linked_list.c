#include<stdio.h>
#include<stdlib.h>
void main()
{
	
	struct node
	{
		int data;
		struct node *next;
	};
	
	struct node *head,*newnode,*temp;
	head=0;
	int count=0;
	int choice=1;
	while(choice)
	{
		
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		//If head is pointing to NULL then make the newnode as the first node; 
		head=temp=newnode;
	    	
	}
	else
	{
		//temp is used to insert to newnode;
		temp->next=newnode;
		temp=newnode;
	}
	printf("Do yu want to continue(0/1)?");
	scanf("%d",&choice);
	
	}
	
	
	void insertatbeg()
	
	
	
	
	void display()
	
	{
	

	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp = temp->next;
		count++;
	}
	printf("The number of nodes are: %d",count);
	
	}  
	
	display();
	
	getch();
}

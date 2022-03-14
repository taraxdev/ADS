#include<stdio.h>
#include<stdlib.h>
void exit();
struct node{
	int data;
	struct node*next;
	struct node*prev;
};
struct node *head=NULL,*new,*l,*temp,*tem;
int n,pos,i;
void create()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value to insert");
	scanf("%d",&n);
	new->next=NULL;
	new->prev=NULL;
	new->data=n;
}
void insert_beg()
{
	create();
	if(head==NULL)
	{
	head=new;
	}
	else
	{
	new->next=head;
	head->prev=new;
	head=new;
	}
}
void insert_end()
{
	create();
	if(head==NULL)
	{
	head=new;
	}
	else
	{
	l=head;
	while(l->next!=NULL)
	{
	l=l->next;
	}
	new->prev=l;
	l->next=new;
	}
}
void insert_pos()
{
	create();
	int pos;
	printf("Enter the position to insert");
	scanf("%d",&pos);
	if(pos==1)
	{
	insert_beg();
	}
	else
	{
	l=head;
	for(i=0;i<pos;i++)
	{
	l=l->next;
	}
	new->prev=l;
	l->next->prev=new;
	new->next=l->next;
	l->next=new;
	}
}
void display()
{
	if(head==NULL)
	{
	printf("Underflow");
	}
	else
	{
	l=head;
	while(l!=NULL)
	{
	printf("%d",l->data);
	l=l->next;
	}
	}
}
void delbeg()
{
	if(head==NULL)
	{
		printf("Underflow");
	}
	else
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		printf("%d is removed",temp->data);
		free(temp);
	}
}
void delend()
{
	if(head==NULL)
	{
		printf("Underflow");
	}
	else{
		temp=head;
		while(temp->next!=NULL)
		{
			tem=temp;
			temp=temp->next;
		}
		printf("%d is removed",temp->data);
		tem->next=NULL;
	}
}
void delpos()
{
	int pos;
	scanf("%d",&pos);
	printf("Enter the pos");
	temp=head;
	for(i=0;i<pos;i++)
	{
		tem=temp;
		temp=temp->next;
	}
	printf("%d is removed",temp->data);
	tem->next=temp->next;
	temp->next->prev=tem;

}
void main()
{
	int ch;
	while(1)
	{
	printf("1.Inbeg,2.inend,3.inpos,4.display,5.delbeg,6.delend,7.delpos,8.exit");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
			insert_beg();
			break;
	case 2:
			insert_end();
			break;
	case 3:
			insert_pos();
			break;
	case 4:
			display();
			break;
	case 5:
			delbeg();
			break;
	case 6:
			delend();
			break;
	case 7:
			delpos();
			break;
	case 8:
			exit(1);
			break;
	default:
			printf("Invalid");

	}
	}
}
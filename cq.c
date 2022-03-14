#include <stdio.h>
#include <stdlib.h>
int n,size=5,front=-1,rear=-1,q[10],temp,i;
void enqueue()
{
if ((front==0 && rear==size-1) || (rear==front-1))
{
	printf("Queue overflow..\n");

}
else
{
if (front==-1)
{
front++;
}
printf("Enter value to insert:\n");
scanf("%d",&n);
rear=(rear+1)%size;
q[rear]=n;
printf("inserted %d\n",q[rear]);
}
}
void dequeue()
{
if(front==-1 && rear==-1)
{
	printf("Queue Underflow..\n");

}
else
{
if(front==rear)
{
printf("Removed %d\n",q[front]);
front=rear=-1; 
}
else
{
	printf("Removed %d\n",q[front]);
	front=(front+1)%size;
		}
	}
}
void display()
{
printf("Queue elements are:\n");
i=front;
while(i!=rear)
{
printf("%d\n",q[i]);
i=(i+1)%size;
}
printf("%d\n",q[rear]);
}

void main()
{
printf("Size of the queue is 3\n");
printf("........................\n");
int ch;
while(1)
{
printf("1.Insert into queue\n2.Delete from queue\n3.Display queue\n4.Exit\n\n");
printf("Select your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Invalid choice");
}
}
}
#include <stdio.h>
#include <stdlib.h>
int n,size=3,front=-1,rear=-1,q[10],i;
void enqueue()
{
if (rear==size-1)
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
rear++;
q[rear]=n;
printf("Inserted %d\n",q[rear]);
}
}
void dequeue()
{
if(front==-1 || front>rear)
{
printf("Queue Underflow..\n");
}
else
{
printf("Removed %d\n",q[front]);
front++;
}
}
void display()
{
printf("Queue elements are:\n");
for (i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
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

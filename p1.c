#include <stdio.h>
#include <stdlib.h>
int n,size=3,front=-1,rear=-1,q[10],i;

void enqueue(){
	if(rear==size-1){
		printf("Queue Full");
	}else{
		if(front==-1){
			front++;
		}
		printf("Enter value to insert: \n");
		scanf("%d", &n);
		rear++;
		q[rear]=n;
		printf("Inserted %d",q[rear]);
	}
}

void dequeue(){
	if(front==-1 || front>rear){
		printf("Queue underflow\n");
	}else{
		printf("Removed %d", q[front]);
		front++;
	}
}

void display(){
	printf("Queue elements are:\n");
	for(i=front;i<=rear;i++){
		printf("%d", q[i]);
	}
}
















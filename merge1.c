// Program to implement stack operations using arrays
#include <stdio.h>
#include <stdlib.h>

int top=-1,stack[10],size=4,i,n;

void display(){
	if(top!=-1){
		printf("Status\n");
		for(i=0;i<=top;i++){
			printf("%d\n",stack[i]);
		}
	}else{
		printf("stack is empty\n");
	}
}

void push(){
	if(top==size){
		printf("stack overflow \n");
	}else{
		printf("enter the value to push\n");
		scanf("%d",&n);
		top++;
	}
}
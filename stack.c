#include <stdio.h>
#include <stdlib.h>

int stack[100],num,i;
int top=-1;

void push(){
	int val;
	if(top==num){
		printf("full");
	}else{
		printf("enter the element: ");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}

void pop(){
	if(top=-1){
		printf("empty");
	}else{
		top--;
	}
}

void display(){
	for(i=top;i>=0;i--){
		printf("%d",stack[i]);
	}
}

void main(){
	int ch;
	while(1){
		printf("1)push\n2)pop\n3)display\n4)exit");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Invalid");
		}
	}
}
//push=top==num full top==-1 scan(val)top++stack[i]=val
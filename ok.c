#include <stdio.h>
#include <stdlib.h>
void input();
void setunion();
void intersection();
void compliment();
void display();

int n=5;
int a[5],b[5],c[5];

void input(){
 int n,x,i;
 printf("U={1,2,3,4,5}");
 printf("\nEnter bitsring of set1\n");
 for(i=0; i<5; i++){
	scanf("%d",&a[i]);
 }
 printf("\nEnter bitsring of set2\n");
 for(i=0; i<5; i++){
 	scanf("%d",&b[i]);
 }
}

void display(){
	int i;
	printf("Bitstring is \n");
	for(i=0;i<n;i++){
		printf("%d", c[i]);
	}

	printf("\n set is\n");
	for(i=0; i<n; i++){
		if(c[i]!=0){
			printf("%d", i+1);
		}
	}
}

void setunion(){
	int i;
	printf("The union set of A and B is: \n");
	for(i=0;i<n;i++){
		if (a[i]!=b[i]){
			
		}
	}
}
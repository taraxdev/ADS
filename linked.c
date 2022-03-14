#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node*next;
}

struct node*head=NULL,next,l,tem,temp;
int pos,i,n;

void create(){
  new = (struct node*)malloc(sizeof(struct node));
  printf("Please enter the number");
  scanf("%d", &n);
  new->next=NULL;
  new->data=n
}

void del_beg(){
  if(head==NULL){
    printf("Undeflow");
  }else{
    temp=head;
    head=head->next;
    free(temp)
  }
}

void del_end(){
  if(head==NULL){
    printf("Underflow");
  }else{
    temp=head;
    while(temp->next!=NULL){
      tem=temp;
      temp=temp->next;
    }
    printf("%d removed", temp->data);
    tem->next=NULL;
  }
}

void delpos(){
  int pos;
  printf("Enter the position: ");
  scanf("%d",&pos);
  temp=head;
  for(i=1;i<pos;i++){
    tem=temp;
    temp=temp->next
  }
  printf("%d removed", temp->data);
  tem->next=temp->next
}
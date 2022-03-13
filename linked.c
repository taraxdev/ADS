#include <stdio.h>
#include <stdlib.h>
void exit();
struct node{
  int data;
  struct node*next;
};
struct node * head=NULL,*new,*l,*temp,*tem;
int n,pos,i;
void create(){
  new=(struct node*)malloc(sizeof(struct node));
  printf("Enter the value to insert");
  scanf("%d", &n);
  new->next=NULL;
  new->data=n;
}

void insertbeg(){
  create();
  if(head==NULL){
    head=new;
  }else{
    new->next=head;
    head=new;
  }
}

void insertend(){
  create();
  if(head==NULL){
    head=new;
  }else{
    l=head;
    while(l->next!=NULL){
      l=l->next;
    }
    l->next=new;
  }
}

void insertpos(){
    create();
    int pos;
    printf("Enter the postition to insert:");
    scanf("%d", &pos);
    if(pos==1){
      insertbeg();
    }else{
      l=head;
      for(i=0;i<pos;i++){
        l=l->next;
      }
      new->next=l->next;
      l->next=new;    }
}

void display(){
  if(head==NULL){
    printf("Underflow");
  }else{
    l=head;
    while(l!=NULL){
      printf("%d",l->data);
      l=l->next;
    }
  }
}

void delbeg(){
  if(head==NULL){
    printf("Underflow");
  }else{
    temp=head;
    head=head->next;
    free(temp);
  }
}

void delend(){
  if(head==NULL){
    printf("underflow");
  }else{
    temp=head;
    while(temp->next!=NULL){
      tem=temp;
      temp=temp->next;
    }
    printf("%d is removed", temp->data);
    tem->next=NULL;
  }
}

void delpos(){
  int pos;
  scanf("%d", &pos);
  printf("enter the pos");
  temp=head;
  for(i=0;i<pos;i++){
    tem=temp;
    temp=temp->next;
  }
  printf("%d is removed",temp->data);
  tem -> next = temp -> next;
}
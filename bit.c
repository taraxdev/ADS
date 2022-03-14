#include<stdio.h>
#include<stdlib.h>
void input();
void setunion();
void intersection();
void compliment();
void display();
int n=5;
int a[5],b[5],c[5];
// int main()
// {
// int ch;
// while(1)
// {
// printf("\nOPTIONS:\n");
// printf("1.Input\n2.Union\n3.Intersection\n4.Compliment\n 5.Exit\n\n");
// printf("Enter your choice\n");
// scanf("%d",&ch);
// switch(ch)
// {
// case 1:input();
// break;
// case 2:setunion();
// break;
// case 3:intersection();
// break;
// case 4:compliment();
// break;
// case 5:exit;
// break;
// }
// }
// }
void input()
{
int n,x,i;
printf("U={1,2,3,4,5}");
printf("\nEnter bitsring of set1\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("Enter bitstring of set2\n");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
}

void display()
{
int i;
printf("Bitstring is \n");
for(i=0;i<n;i++)
{
printf("%d",c[i]);
}
printf("\n Set is\n");
for(i=0;i<n;i++)
{
if(c[i]!=0)
printf("%d",i+1);
}
}

void setunion()
{
int i;
printf("The union set of A and B is:\n");
for(i=0;i<n;i++)
{
if (a[i]!=b[i])
c[i]=1;
else
c[i]=a[i];
}
display();
}

void intersection()
{
int i;
printf("The Intersection set of A and B is:\n");
for(i=0;i<n;i++)
{
if (a[i]!=b[i])
c[i]=0;
else
c[i]=a[i];
}
display();
}

void compliment()
{
int i;
printf("\nThe compliment of set A:\n");
for(i=0;i<n;i++)
{
if (a[i]==1)
c[i]=0;
else
c[i]=1;
}
display();
printf("\nThe compliment of set B:\n");
for(i=0;i<n;i++)
{
if (b[i]==1)
c[i]=0;
else
c[i]=1;
}
display();
}

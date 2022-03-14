#include<stdio.h>
void exit();
int a[5],b[5],c[5],n=5,i;
void input()
{
    printf("U={1,2,3,4,5");
      printf("Enter values in first set");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter values in 2nd set");
    for(i=0;i<5;i++)
    {
       
        scanf("%d",&b[i]);
    }
    
}
void display()
{
    printf("Set is");
    for(i=0;i<5;i++)
    {
        printf("%d",c[i]);
    }
    for(i=0;i<5;i++)
    {
        if(c[i]!=0)
        {
            printf("%d",i+1);
        }
    }
    
}
void setunion()
{
    printf("Union is");
    for(i=0;i<5;i++)
    {
        if(a[i]!=b[i])
        {
            c[i]=1;
        }
        else
        {
            c[i]=a[i];
        }
    }
    display();
}
void aetint()
{
    printf("Intersection is");
    for(i=0;i<5;i++)
    {
        if(a[i]!=b[i])
        {
            c[i]=0;
        }
        else
        {
            c[i]=a[i];
        }
    }
    display();
}
void compliment()
{
    for(i=0;i<5;i++)
    {
        if(a[i]==1)
        {
            c[i]=0;
        }
        else
        {
            c[i]=1;
        }
    display();
    }
    for(i=0;i<5;i++)
    {
        if(b[i]==1)
        {
            c[i]=0;
        }
        else
        {
            c[i]=1;
        }
    display();
    }
}
int main()
{
int ch;
while(1)
{
printf("\nOPTIONS:\n");
printf("1.Input\n2.Union\n3.Intersection\n4.Compliment\n 5.Exit\n\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:input();
        break;
case 2:setunion();
        break;
case 3:aetint();
        break;
case 4:compliment();
        break;
case 5:exit(1);
        break;
}
}
}
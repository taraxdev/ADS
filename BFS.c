#include<stdio.h>
#include<stdlib.h>
int q[20],front=-1,rear=-1,arr[20][20],visited[20]={0};
int bfs (int s, int n);
void main()
{
int i,j,n,ch,s;
printf(" BFS \n");
printf("Enter the Number of Vertices\n");
scanf("%d",&n);
printf("Enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("Enter stating vertex ");
scanf("%d",&s);
bfs(s,n);
}
void add(int item)
{
if(rear==19)
printf("QUEUE FULL");
else
{
if(rear==-1)
{
q[++rear] = item;
front++;
}
else
q[++rear]=item;
}
}
int delete()
{
int k; if ((front>rear)||(front==-1))
return (0);
else
{
k=q[front++];
return(k);
}
}
int bfs(int s,int n)
{
int i,p;
add(s);
visited[s]=1;
p=delete();
if(p!=0)
printf("%d\t",p);
while(p!=0)
{
for(i=1;i<=n;i++)
{
if((arr[p][i]!=0)&&(visited[i]==0))
{
add(i);
visited[i]=1;
}
}
p=delete();
if(p!=0)
printf("%d\t",p);}}
#include<stdio.h>
#include<stdlib.h>
#define error 100000 
int q[20],front=-1,rear=-1,matrix[20][20],visited[20],v,i,j,start;

void enqueue(int x)
{
 printf("%d ",x);
 if(front==-1)
 	front++;
 q[++rear]=x;
}

int dequeue()
{
 if(front==-1&&rear==-1||front==rear+1)
 	return (error);
 else
 	return (q[front++]);
}

void bfs(int s)
{
 int p;
 enqueue(s);
 for(p=dequeue();p!=error;p=dequeue())
 	for(i=p,j=1;j<=v;j++)
 		if (matrix[p][j]==1&&visited[j]==0)
 		{
 		 enqueue(j);
 		 visited[j]=1;
 		}			
}

void main()
{
 printf("\n\n\t\t\t\t\tPROGRAM TO PERFORM BFS\n\n");
 printf("____________________________________________________________________________________________________________________________________________________________________________\n\n");
 printf("Enter the number of vertices : ");
 scanf("%d",&v);
 printf("Enter the adjacency matrix :\n");
 for(i=1;i<=v;visited[i++]=0)
 	for(j=1;j<=v;scanf("%d",&matrix[i][j++]));
 printf("Enter the starting vertex :");
 scanf("%d",&start);
 bfs(start);
 printf("\n____________________________________________________________________________________________________________________________________________________________________________\n\n");
}
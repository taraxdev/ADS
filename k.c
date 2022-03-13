#include <stdio.h>
#include <stdlib.h>
#define INF 1000

int edge=0,mincost=0;
int i,j,n,a,b;
int cost[20][20], visited[20]={0};

void main(){
	printf("Enter the number of vertex: \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",cost[i][j]);
			if(cost[i][j]==0){
				cost[i][j]= INF;
			}
		}
	}

	for(k=1;k<n;k++){
		int min = INF;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(cost[i][j]<min){
					min = cost[i][j];
					a=i;
					b=j;
				}
			}
		}

	printf("\n Edge : %d%d-->%d\n",k,a,b);
	printf("\nCost: %d\n", min);
	mincost = mincost + min;
	visited[b]=1;

	cost[a][b]=cost[b][a]=INF;
	}
	printf("Total cost is: %d", mincost);
}
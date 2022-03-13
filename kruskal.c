#include <stdio.h>
#include <stdlib.h>
#define INF 1000

int edge = 0;
int i, j, cost[20][20],n,visited[20]={0},a,b,mincost = 0;

void main(){
	printf("Enter the no of vertices: ");
	scanf("%d", &n);
	printf("Enter the cost adjacency matrix: \n");

	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &cost[i][j]);

			if(cost[i][j]==0){
				cost[i][j] == INF;
			}
		}
	}

	for()
}
#include<stdio.h>
int ne=1, min_cost=0;
void main()
{
	int n,i,j,min,cost[20][20];
	int a,b,source,visited[20];
	printf("Enter the no. of nodes");
	scanf("%d",&n);
	printf("Enter the cost matrix");
	for(i=1;i<=n;i++)	
	for(j=1;j<=n;j++)
		scanf("%d",&cost[i][j]);
	for(i=1;i<=n;i++)
		visited[i]=0;
	printf("Enter the source node\n");
	scanf("%d",&source);
	visited[source]=1;
	printf("Minimum spanning tree\n");
	while(ne<n)
	{
		min=999;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
					if(visited[i]==0)
					continue;
					else
					{
						min=cost[i][j];
						a=i;
						b=j;
					}
			}
		}
		if(visited[a]==0||visited[b]==0)
		{
			printf("\nedge %d\t(%d --> %d) = %d\n",ne++,a,b,min);
			min_cost=min_cost+min;
			visited[b]=1;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("Min cost = %d\n",min_cost);
}

	

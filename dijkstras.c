#include<stdio.h>
#include<stdlib.h>
#define max 10
void dij(int source, int cost[max][max], int visited[max],int d[max], int n)
{
	int i,j,min,v,w;
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		d[i]=cost[source][i];
	}
	visited[source]=1;
	d[source]=1;
	for(j=2;j<=n;j++)
	{
		min=999;
		for(i=1;i<=n;i++)
		{
			if(!visited[i])
			{
				if(d[i]<min)
				{
					min=d[i];
					v=i;
				}
			}
		}
	}
	visited[v]=1;
	for(w=1;w<=n;w++)
	{
		if(cost[v][w]!=999 && visited[w]==0)
		if(d[w]>cost[v][w]+d[v])
		d[w]=cost[v][w]+d[v];
	}
}
void main()
{
	int i,j,min,cost[max][max],source,visited[max],d[max],n;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d", &cost[i][j]);
	printf("Enter the starting node");
	scanf("%d",&source);
	dij(source,cost,visited,d,n);
	for(i=1;i<=n;i++)
	{
		if(i!=source)
		printf("\nShortest path from %d to %d is %d",source,i,d[i]);
	}
}


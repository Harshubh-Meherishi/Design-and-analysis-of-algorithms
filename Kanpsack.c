#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
void main()
{
    int n,w[100],v[100],i,j;int cap,m[100][100];
    printf("Enter the number of items\n");
    scanf("%d",&n);
    printf("Enter the maximum weight\n");
    scanf("%d",&cap);
    printf("Enter the weights and values of all %d items\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=cap;j++)
        {
         if(j-w[i]>=0)
         {
             m[i][j]=max(m[i-1][j],(m[i-1][j-w[i]]+v[i]));
         }
         else
         m[i][j]=m[i-1][j];
        }
    }
    printf("The maximum value is %d\n",m[n][cap]);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=cap;j++)
       {
           printf("%d\t",m[i][j]);
       }
       printf("\n");
    }
}

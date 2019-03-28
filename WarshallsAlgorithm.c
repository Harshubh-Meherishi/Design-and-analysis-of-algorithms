#include<stdio.h>
void warshalls(int A[4][4])
{
    int i,j;
    for(int k=0;k<4;k++)
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                A[i][j]=A[i][j]||A[i][k]&&A[k][j];
            }
        }
    }
    printf("the final matrix is\n");
    for(i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int i,n;
    int A[4][4];
    printf("Enter the adjacency matrix\n");
    for(i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    warshalls(A);
}

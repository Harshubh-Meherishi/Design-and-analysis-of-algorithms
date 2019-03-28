#include<stdio.h>
void Floyds(int A[5][5])
{
    int i,j;
    for(int k=0;k<5;k++)
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
            }
        }
    }
    printf("the final matrix is\n");
    for(i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}
int min(int a,int b)
{
    if(a<b)
    return a;
    else return b;
}
void main()
{
    int i,n;
    int A[5][5];
    printf("Enter the matrix\n");
    for(i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    Floyds(A);
}

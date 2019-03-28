#include<stdio.h>
#include<time.h>

void main()
{
    int i,j,A[10000],temp;
    double time;
    clock_t end,start;
    printf("Enter the number of elements\n");
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        A[i]=rand();
    }
    start=clock();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j+1]<A[j])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    end=clock();
    time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("The time taken for %d elemens is %f",n,time);
}

#include<stdio.h>
#include<time.h>
void main()
{
    int i,j,A[1000000];
    clock_t end,start;
    int n;double time;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        A[i]=rand();
    }
    start=clock();
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[min]>A[j])
            {
                min=j;
            }
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
    end=clock();
    /*printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }*/
    time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Time taken for %d inputs is %f\n",n,time);
}

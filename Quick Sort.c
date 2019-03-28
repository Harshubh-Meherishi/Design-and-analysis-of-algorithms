#include<stdio.h>
#include<time.h>
void main()
{
    int A[100000],i,j,n;
    clock_t end,start;
    double time;
    printf("Enter the number of array elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    start=clock();
    quicksort(A,0,n-1);
    end=clock();
    time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("Time taken to sort %d elements is %f\n",n,time);
}
void quicksort(int A[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(A,low,high);
        quicksort(A,low,j-1);
        quicksort(A,j+1,high);
    }
}

void partition(int A[],int low,int high)
{
    int i,j;
    i=low;
    j=high;
    int p=A[low];
    while(i<j)
    {
        while(A[i]<=p&& i<high)
        {
            i++;
        }
        while(A[j]>=p&&j>low)
        {
            j--;
        }
        if(i<j)
        {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    A[low]=A[j];
    A[j]=p;
    }
}

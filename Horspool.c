#include<stdio.h>
int Table[200];
int Horsepool(char T[],int n,char P[],int m)
{
    int i,j,k;
    shifttable(P,m);
    i=m-1;
    while(i<=n-1)
    {
        k=0;
        while(k<=m-1 && T[i-k]==P[m-k-1])
            k++;
        if(k==m)
        {
            return i-m+1;
        }
        else
        i=i+Table[T[i]];
    }
    return(-1);
}
void shifttable(char P[],int m)
{
    int i;
    for(i=0;i<200;i++)
    {
        Table[i]=m;
    }
    for(int j=0;j<m-1;j++)
    {
        Table[P[j]]=m-j-1;
    }
}
void main()
{
    char T[1000],P[1000];int i;
    printf("Enter the test\n");
    gets(T);
    printf("Enter the pattern\n");
    gets(P);
    int m=strlen(P);
    int n=strlen(T);
    int o=Horsepool(T,n,P,m);
    printf("%d\n",o);
}

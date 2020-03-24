#include<stdio.h>
#include<conio.h>
int main()
{
    int a[30],i,n,m,j,sum=0,max=0;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the array elements : ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    sum=max+a[i];
    if(sum>max)
    {
    max=sum;
    }
    }
    printf("max sum of integers : %d",max);
    getch();
}


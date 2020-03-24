//Implementation of Merge Sort.
#include<stdio.h>
#include<conio.h>
void mergesort(int k[],int,int);
void merge(int k[],int,int,int);

void mergesort(int k[],int low,int high)
{

    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(k,low,mid);
        mergesort(k,mid+1,high);
        merge(k,low,mid,high);
    }
}
void merge(int k[],int low,int mid,int high)
{
    int i,j,temp[20],h;
    i=low;
    j=mid+1;
    h=low;
    
    while(i<=mid&&j<=high)
    {
        if(k[i]<=k[j])
        {
            temp[h]=k[i];
            i=i+1;
        }
        else
        {
            temp[h]=k[j];
            j=j+1;
        }
        h++;
    }
    
    if(i>mid)
    {
        while(j<=high)
        {
        temp[h]=k[j];
        j=j+1;
        h=h+1;
        }
    }
    else
    {
        while(i<=mid)
        {
        temp[h]=k[i];
        i=i+1;
        h=h+1;
        }
    }
    for(i=low;i<=high;i++)
    {
        k[i]=temp[i];
    }
}

int main()
{

    int m,n,i,k[20],low,mid,high;
    printf("\nENTER THE NO OF ELEMENTS\n");
    scanf("%d",&n);
    printf("\nENTER NUMBERS\n");
    for(m=1;m<=n;m++)
    {
        scanf("%d",&k[m]);
    }
    low=1;
    high=n;
    
    mergesort(k,low,high);
    
    printf("\nSORTED ARRAY\n");
    for(i=low;i<=high;i++)
    {
     printf("%d \t",k[i]);
    }
    getch();
    return(0);
}

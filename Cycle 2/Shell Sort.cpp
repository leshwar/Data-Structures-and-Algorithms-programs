//Implementation of Shell Sort.
#include<stdio.h>
#include<conio.h>
int shellsort(int a[],int n);
    
int main()
{
int i,n,a[20];
  
  printf("\nEnter size of the array: ");
  scanf("%d",&n);
  
  printf("\nEnter the elements in to the array:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);   
  shellsort(a,n);
  
  printf("\nAfter sorting the elements are: ");
  for(i=0;i<n;i++)
  printf(" %d",a[i]);
  getch();
     
      }  
int shellsort(int a[],int n)
{
int d,temp,i;
d=n/2;
  
  while(d>=1)
  {
  for(i=0;i<n-d;i++)
  {
  if(a[i]>a[i+d])
  {
  temp=a[i];
  a[i]=a[i+d];
  a[i+d]=temp;
  }
  }
                 
  d=d/2;
}
    
  return 1;   
}

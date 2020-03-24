//Implementation of Bubble Sort Ascending.
#include<stdio.h>
#include<conio.h>
main()
{
      int a[25],i,j,n,temp;
      printf(" Enter the number of elements in the array:\n");
      scanf("%d",&n);
      printf("Enter the array elements\n");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);      
      }
      
      for(i=0;i<n;i++)
      {
      for(j=0;j<n;j++)
      {
      if(a[i]<a[j])
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      }
      }
      }
      for(i=0;i<n;i++)
      printf(" %d ",a[i]);
      getch();
}
      
       

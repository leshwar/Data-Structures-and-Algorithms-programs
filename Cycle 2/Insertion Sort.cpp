//Implementation of Insertion Sort.
#include<stdio.h>
#include<conio.h>
main()
{
      int a[25];
      int i,j,k,temp,n;
      printf("Enter the number of elements ");
      scanf("%d",&n);
      printf("Enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("Insertion sort ");
      printf("Array before Sorting\n");
      for(i=0;i<n;i++)
      printf(" %d ",a[i]);
      
      for(i=1;i<n;i++)
      {
      for(j=0;j<i;j++)
      {
      if(a[j]>a[i])
      {
      temp=a[j];
      a[j]=a[i];
      a[i]=temp;
      }}}
      
      printf("Array after Sorting\n");
      for(i=0;i<n;i++)
      printf(" %d ",a[i]);
      getch();
}
      

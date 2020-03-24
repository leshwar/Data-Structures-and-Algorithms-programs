//Implemantation of Binary Search.
#include<conio.h>
#include<stdio.h>
main()
{
      int temp,i,j,n,a[20],key,low,high,mid;
      printf("Enter the number of elements\n");
      scanf("%d",&n);
      
      printf("Enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
      printf("Sorting the elements in ascending order.\n");
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
      
      printf("Enter the element to be searched\n");
      scanf("%d",&key);
      
      low=0;
      high=n-1;
      while(low<=high)
      {
                      mid=(low+high)/2;
                      if(key==a[mid])
                      break;
                      else if(key>a[mid])
                      {
                      low=low+1;
                      }
                      else
                      {
                      high=high-1;
      }}
      if(key==a[mid])
      {
                     printf("The element is present in the Array");
      }
      else
      {
          printf("The element is not present in the Array");
      }
      getch();
}

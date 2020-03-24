//Implementation of Selection Sort.
#include<stdio.h>
#include<conio.h>
main()
{
      int a[20],n,i,j,posmin,temp;
      
      printf("Enter the number of elements\n");
      scanf("%d",&n);
      
      printf("Enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
      for(j=0;j<n-1;j++)
      {
      posmin=j;
                        for(i=j+1;i<n;i++)
                        if(a[i]<a[posmin])
                        posmin=i;//This is Used to change the number in that particular position as 1st element is compared with every element in
                        temp=a[j];//a particular loop.
                        a[j]=a[posmin];
                        a[posmin]=temp;
      }
      printf("Sorted list of Elements is :\n");
      for(i=0;i<n;i++)
      printf(" %d ",a[i]);
      getch();
}

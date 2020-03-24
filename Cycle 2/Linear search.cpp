//Implementation of Linear Search.
#include<stdio.h>
#include<conio.h>
main()
{
      int i,n,t,a[20],flag,pos
      printf(" Enter the number to be found ");
      scanf("%d",&t);
      printf(" Enter the number of values ");
      scanf("%d",&n);
      printf(" Enter the Numbers to be found with ");
      for(i=0;i<n;i++)
      
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
      if(a[i]==t)
                {
                flag=1;
                pos=i+1;
                }
                }
                
                if(flag==1)
      printf(" The number is found in the given array and its position is %d ",pos);
      
      else
       
      printf(" The number is not found in the given array ");
      
      getch();
      }

//array implementation
#include<stdio.h>
#include<conio.h>
main()
{
      int p,n,s,a[10],i,j,b[10];
      printf("Enter the number of array elements ");
      scanf("%d",&n);
      printf("Enter the array elements : ");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("Select Deletion :1.Top\n 2.Bottom\n 3.Random ");
      scanf("%d",&s);
      switch(s)
      {
      case 1:
      j=0;
      printf("The top position element is to be deleted ");
      for(i=1;i<n;i++)
      {
                      b[j]=a[i];
                      j++;
                      }
      printf(" The array is now : ");
      for(j=0;j<n-1;j++)
      {
                      printf("%d",b[j]);
                      }
      break;
      
      case 2 :
           j=0;
           printf("The bottom position element is to deleted ");
           for(i=0;i<n-1;i++)
           {
           b[j]=a[i];
           j++;
           }
      printf("The array is now : ");
      for(j=0;j<n-1;j++)
      {
      printf("%d",b[j]);
      }
           break;
      
      case 3 :
           
      printf("Enter the position of the element to be deleted ");
      scanf("%d",&p);
      if(p>=n+1)
      printf("Deletion not possible.\n"); 
      else
      {
      for(i=p-1;i<n-1;i++)
      {
      a[i]=a[i+1];
      }
      printf("Resultant array is\n");
      for(i=0;i<n-1;i++)
      printf("%d\n", a[i]);
      }
      break;   
      }                      
      getch();
      }                    

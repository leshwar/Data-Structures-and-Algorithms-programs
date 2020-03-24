//array implementation
#include<stdio.h>
#include<conio.h>
main()
{
      int i,a[20],n,q,p,r,j,b[20];
      printf("Enter the number of elements of the array ");
      scanf("%d",&n);
      printf("Enter the array elements");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
      printf("Select Which type of Insertion 1.Top\n2.Bottom\n3.Random");
      scanf("%d",&q);
      switch(q)
      {
      case 1 :
      j=1;
      printf("Enter the element of the array to be inserted ");
      scanf("%d",&r);
      for(i=0;i<n;i++)
      {
      b[j]=a[i];
      b[0]=r;
      j++;
      }
      for(j=0;j<n+1;j++)
      printf("%d",b[j]);
      break;
                                    
      case 2 :
      j=0;
      printf("Enter the element of the array to be inserted ");
      scanf("%d",&r);
      for(i=0;i<n;i++)
      {
      b[j]=a[i];
      b[n]=r;
      j++;
      }
      for(j=0;j<n+1;j++)
      printf("%d",b[j]);
      break;
         
       case 3 :
            
      printf("Enter the element and its position to be insterted in the array");
      scanf("%d%d",&r,&p);
      for(i=n-1;i>=p-1;i--)
      {
      a[i+1]=a[i];
      }
      a[p-1]=r;
      printf("Resultant array is\n");
      for(i=0;i<=n;i++)
      printf("%d\n",a[i]);
      break;                              
      }
      getch();
      }

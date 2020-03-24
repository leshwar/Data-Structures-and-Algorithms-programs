/*Implementation of stack using Arrays*/
#include<stdio.h>
#include<conio.h>
main()
{
      int choice,top=0,key,n,flag;
      
      printf("Enter the stack size ");
      scanf("%d",&n);
      int stck[n],j=n;
      get :
      printf("Enter your choice\n1.PUSH\n2.POP\n3.DISPLAY\n4.QUIT ");
      scanf("%d",&choice);
      
      switch(choice)
      {
                    case 1 :
                         
                         if(top==j)
                         {
                         printf("The stack is FULL\n");
                         goto get;
                         }
                         else
                         {
                         printf("Enter the element to be PUSHED ");
                         scanf("%d",&key);
                         top++;
                         stck[top]=key;
                         goto get;
                         }
                         break;
                    case 2 :
                         if(top==0)
                         {
                         printf("The Stack is Empty.Deletion not possible ");
                         goto get;
                         }
                         else
                         {
                         printf("Enter the element to be deleted is %d\n",stck[top]);
                         stck[top]='\0';
                         top--;
                         goto get;
                         }
                         break;
                    case 3 :

                         printf("The Resultant Stack is ");
                         for(top=1;top<n+1;top++)
                         printf(" %d ",stck[top]);
                         break;
                    case 4 :
                         return 0;
                         break;
                              
      }       
      getch();
      }
                
      

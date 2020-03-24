//Implementation of Stack using Linked list
#include<conio.h>
#include<malloc.h>
#include<stdio.h>
struct node
{
       int data;
       struct node *next;
}; struct node *head,*tail,*nw,*temp,*temp1;

main()
{
      int n,choice;
      
      nw=(struct node*)malloc(sizeof(struct node));
      nw->data='\0';
      nw->next=NULL;
      head=nw;
      tail=nw;
      
      get:
      printf("Enter your choice\n0.Creation\n1.PUSH\n2.POP\n3.Display\n4.Exit\t");
      scanf("%d",&choice);
      switch(choice)
      {
case 0:
{
      int n,i,item;
      printf("Enter the number of Stacks");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
      printf("Enter the item ");
      scanf("%d",&item);
      if(head->data=='\0')
      {
      head->data=item;
      }
      else
      {
      nw=(struct node*)malloc(sizeof(struct node));
      nw->data=item;
      nw->next=NULL;
      tail->next=nw;
      tail=nw;
      }}
                  goto get;
                  break;
                  }                    
case 1:
{
           int n,i,item;
           printf("Enter the item\t");
           scanf("%d",&item);               
           if(head->data=='\0')
           {
           head->data=item;
           }
           else
           {
           nw=(struct node*)malloc(sizeof(struct node));    
           nw->data=item;
           nw->next=NULL;
           tail->next=nw;
           tail=nw;
           }
                         goto get;
                         break;
           }
case 2:
{
           int i;
           if(head->data=='\0')
           {
           printf("Stack is empty\n");
           }
           else
           {
           temp=head;
           temp1=tail;
           for(i=0;i<n;i++)
           {
           temp=temp->next;
           }
           temp->next=NULL;
           free(temp1);
           tail=temp;
           } 
           goto get;
           break;
}
case 3:
           {
           if(head->next==NULL)
           printf("Stack is empty\n");
           else
           {
           temp=head;
           while(temp!=NULL)
           {
           printf("%d\n",temp->data);
           temp=temp->next;
           }} 
           goto get;
           break;
           }
case 4:
                         return 0;
                         break;
      }
      getch();
      }

//Implementation of Queue using Linked list
#include<conio.h>
#include<malloc.h>
#include<stdio.h>
void INSERT();
void DELETE();
void display();
struct node
{
       int data;
       struct node *next;
}; struct node *head,*tail,*nw,*temp;

main()
{
      int choice;
      
      nw=(struct node*)malloc(sizeof(struct node));
      nw->data='\0';
      nw->next=NULL;
      head=nw;
      tail=nw;
      
      g:
      printf("Enter your choice\n1.INSERT\n2.DELETE\n3.Display\n4.Exit\t");
      scanf("%d",&choice);
      switch(choice)
      {
                    case 1:
                         INSERT();
                         goto g;
                         break;
                    case 2:
                         DELETE();
                         goto g;
                         break;
                    case 3:
                         display();
                         goto g;
                         break;
                    case 4:
                         return 0;
                         break;
      }
      getch();
      }
void INSERT()
      {
           int n,i,item;
           printf("Enter the size of the Queue ");
           scanf("%d",&n);
           for(i=0;i<n;i++)
           {
           printf("Enter the items\t");
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
           }}}
void DELETE()
           {
                   if(head->next==NULL)
                   printf("The Queue is empty.POP not possible\n");
                   else
                   {
                   temp=head;
                   head=head->next;
                   free(temp);
                   }}
void display()
           {
           if(head->next==NULL)
           printf("Queue is empty\n");
           else
           {
           temp=head;
           while(temp!=NULL)
           {
           printf("%d\n",temp->data);
           temp=temp->next;
           }}} 

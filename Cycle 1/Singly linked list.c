#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
       int data;
       struct node *next;
}; struct node *head,*tail,*temp2,*temp1,*nw,*temp;

int main()
{
    int n,choice;
    
    nw=(struct node*)malloc(sizeof(struct node));
    nw->data='\0';
    nw->next=NULL;
    head=tail=nw;
    
    get:
    printf("Enter option\n");
    printf("0.Creation\n1.Insertion\n2.Deletion\n3.Display\n4.Searching\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
case 0:
{
      int n,i,item;
      printf("Enter the number of nodes");
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
 int item,pos,i;
 printf("Enter the item you want to insert");
 scanf("%d",&item);
 if(head->data=='\0')
 {
 head->data=item;
 }
 else
 {
         int pos;
         temp=head;
         temp1=head;
         printf("Enter the position in which you want to insert");
         scanf("%d",&pos);
         nw=(struct node*)malloc(sizeof(struct node));
         nw->data=item;
         for(i=0;i<pos-1;i++)
         {
                         temp=temp->next;
         }
         temp->next=nw;
         temp=nw;
         for(i=0;i<pos;i++)
         {
         temp1=temp1->next;
         }
         temp->next=temp1;
     }
                  goto get ;
                  break;
                  }
 case 2:
 {
    int pos,i;
    printf("Enter the position you want to delete ");
    scanf("%d",&pos);
    temp1=head;
    temp2=head;
    for(i=0;i<pos-1;i++)
    {
                        temp1=temp1->next;
                        temp2=temp2->next;
                        }
                        temp2=temp2->next;
                        temp1->next=temp2->next;
                        free(temp2);
                        n--;
                  goto get;
                  break;
                  }
 case 3:
 {
 if(head->data=='\0')
 printf("List is Empty");
 else
     {
     temp=head;
     while(temp!=NULL)
     {
     printf("\n%d",temp->data);
     temp=temp->next;
}}
                  goto get ;
                  break;
                  }
case 4:
{
int key,count,i,n;
printf("Enter the element to be searched");
scanf("%d",&key);
temp=head;
for(i=0;i<n;i++)
{
                if(key==temp->data)
                count=1;
                temp=temp->next;
}
if(count==1)
printf("The element is present");
else
{
printf("Not present");
}
                  goto get ;
                  break;
                  }
     }
     getch();
}
     

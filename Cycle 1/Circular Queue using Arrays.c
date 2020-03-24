//Implemantation of Circluar Queue using Arrays
#include<stdio.h>
#include<conio.h>
int main()
{
    int choice,i,n,key,fr=1,rr=1;
    printf("Enter the Queue size");
    scanf("%d",&n);
    int que[n];
    get:
    printf("Enter your choice\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\t");
    scanf("%d",&choice);
    
    switch(choice)
    {
                  
                  case 1 :
                       {
                        int item;
                        if(fr==n+1)
                        {
                        printf("The Queue is full\n");
                        }
                        else if(rr==1)
                        {
                        printf("Enter the element to be inserted in the Queue\n");
                        scanf("%d",&key);
                        que[fr]=key;
                        fr++;
                        }
                        else if((rr>0)&&(fr==n+1))
                        {
                        printf("Enter the element to be inserted in the Queue\n");
                        scanf("%d",&key);
                        fr=(fr+1)%n;
                        que[fr]=item;
                        }
                        goto get ;
                        break;
                       }
                  case 2 :
                        if((fr==1)||(rr==n))
                        {
                        printf("The Queue is empty.Deletion is not possible\n");
                        }
                        else
                        {
                        que[rr]='\0';
                        rr++;
                        }
                        goto get ;
                        break;
                        
                  case 3 :
                       printf("The resultant Queue is : ");
                       for(i=1;i<=fr;i++)
                       {
                       printf(" %d ",que[i]);
                       }
                       goto get ; 
                       break;
                  case 4 :
                       return 0;
                       break;
    }
    getch();
}

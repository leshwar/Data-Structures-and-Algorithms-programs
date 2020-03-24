//Implemantation of Linear Queue using Arrays
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
                        if(fr==n+1)
                        {
                        printf("The Queue is full\n");
                        }
                        else
                        {
                        printf("Enter the element to be inserted in the Queue\n");
                        scanf("%d",&key);
                        que[fr]=key;
                        fr++;
                        }
                        goto get ;
                        break;
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
                       for(i=1;i<fr+1;i++)
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

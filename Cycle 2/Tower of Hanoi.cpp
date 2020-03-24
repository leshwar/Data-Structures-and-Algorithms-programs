#include <conio.h>
#include <stdio.h>
int main()
{
    void hanoi(char,char,char,int);
    char t1='A',t2='B',t3='C';
    int n;
    printf("\n Enter the no. of disks on Tower A:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("\n Nothing to move");
    }
    else
    hanoi(t1,t2,t3,n);
    getch();
}

void hanoi(char t1,char t2,char t3,int n)
{
    static int step=0;
    step++;
    printf("\n %c %c %c %d",t1,t2,t3,n);
    if(n==1)
    {
        printf("\n Move top disk from Tower %c ----> %c",t1,t2);
        return;
    }
    hanoi(t1,t3,t2,n-1);
    printf("\n %c %c %c %d",t1,t2,t3,n);
    printf("\n Move top disk from Tower %c ----> %c",t1,t2);
    printf("\n %c %c %c %d",t1,t2,t3,n);
    hanoi(t3,t2,t1,n-1);
    printf("\n %c %c %c %d steps=%d",t1,t2,t3,n,step);
}

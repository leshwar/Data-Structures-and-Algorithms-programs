//Implementation of Radix Sort.
#include<conio.h>
#include<stdio.h>
int main()
{
int bucket[10][10], buck_count[10],a[10];
int i,j,k,r,no_of_passes=0,divisor=1,largest,pass_no,n;

printf("Enter the number of Elements ");
scanf("%d",&n);
printf("Enter the elements ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
largest=a[0];

//FIRST WE WILL FIND THE LARGEST NUMBER.
 for(i=1;i<n;i++)  
  {
   if(a[i] > largest)
   largest=a[i];
   }
   
//DIVIDING THE LARGEST NUMBER BY 10 UNTIL IT IS GREATER THAN ZERO.
    while(largest > 0)  
    {
	no_of_passes++;
	largest /= 10;
    }

//INITIALIZING BUCKET AND BUCK_COUNT TO ZERO.
    for(pass_no=0; pass_no < no_of_passes; pass_no++)
    {
       for(k=0; k<10; k++)
       {
            buck_count[k]=0;
	 for(j=0;j<10;j++)
	 {
	    bucket[k][j]=0;
	 }
       }

//FINDING THE VALUE OF R HERE. 
	for(i=0;i<n;i++)
    {
	    r=(a[i]/divisor)%10;
	    bucket[r][buck_count[r]]=a[i];
	    buck_count[r]++;
	}
	



//SAVING BUCKET NUMBERES IN 'A' AGAIN.
i=0; 
for(k=0; k<10; k++)
{
for(j=0;j<buck_count[k];j++)
a[i++] = bucket[k][j];
}
divisor*=10;
}

//PRINTING RESULTANT ARRAY.
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}

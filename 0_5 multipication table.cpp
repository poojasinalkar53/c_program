/* Que 5: print the multiplication table */

#include<stdio.h>
#include<math.h>

int main()
{
     int num1,num2,i,j;

     printf("Program to print table according to user.\n");

     printf("Please starting of table number and Ending of table number:  \n");
     scanf("%d%d",&num1,&num2);

     for(i=1;i<=10;i++)
     {    printf("\n");
         for(j=num1;j<=num2;j++)
         {
             printf("\t %d * %d=%d",j,i,i*j);
         }
     }
	return 0;

}

/* ) Write a C program to read n numbers from the user and sort them in ascending/ descending 
order using Insertion sort method. Use step count & swapcount in your program
 and display it at end.*/

#include<stdio.h>
void insertionsort(int a[],int size);
main()
{
int i,j,size;
printf("Enter number of elements\n");
scanf("%d",&size);
int a[size];
printf("Enter numbers\n");
for(i=0;i<size;i++)
{
 scanf("%d",&a[i]);
}

insertionsort(a,size);

printf("descending oreder of given numbers is\n");

for(i=0;i<size;i++)
{
 printf("%d\n",a[i]);
}

}

void insertionsort(int a[],int size)
{
 int temp,i,j;
 for(i=1;i<size;i++)
 {
  j=i;

  while((a[j]>a[j-1])&&j>0)
  {
   temp=a[j];
   a[j]=a[j-1];
   a[j-1]=temp;
   j--;
  }
 }
}

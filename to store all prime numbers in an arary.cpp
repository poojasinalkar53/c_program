/*C Program to accept n numbers & store all prime numbers in an array */
#include<stdio.h>
#include<conio.h>
  int main()
{
  int a[10],i,n;

  printf("\nEnter the n number of an array: ");
  scanf("%d",&n);
  printf("\nEnter the numbers of an array: ");
  for(i=0;i<=n;i++)
{
  scanf("%d",&a[i]);
}
  printf("\nThe Prime Number is: ");
  for(i=1;i<=n;i++)
{
  if(a[i]%2==1)
{
  printf("\t%d",a[i]);
}
}
  return 0;
}


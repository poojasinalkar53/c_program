/*Q3.Write a program to display first n Fibonacci numbers*/
#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1;
	int nextterm;
	printf("Enter the n number of terms :");
	scanf("%d",&n);
	printf("The Fibonacci numbers are ");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",nextterm);
			t1=t2;
			t2=nextterm;
			nextterm=t1+t2;
	}
	return 0;
}

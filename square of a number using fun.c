// find the suqre of two numbers using with argument no return type

#include<stdio.h>
void sum(int);
int main()
{	int a;
	printf("enter the number here");
	scanf("%d",&a);
	sum(a);	
}
void sum(int a)
{
	int b;
	b=a*a;
	printf("The Square is %d",b);
}

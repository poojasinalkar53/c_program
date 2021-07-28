//swapping two numbers using with arg and with return type

#include<stdio.h>
int swap(int,int);
int main()
{	int a,b,c;
	c=swap(a,b);
	printf("Enter the number here");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping a is %d and b is %d",a,b);	
}
int swap(int a,int b)
{	
	
	return a,b;
}

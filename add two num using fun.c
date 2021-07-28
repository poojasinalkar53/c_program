// addition of two number is 11 using function with no arg no return type

#include<stdio.h>
void sum();
int main()
{
	sum();	
}
void sum()
{
	int a,b,c;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("The addition of two numbers is %d",c);
}

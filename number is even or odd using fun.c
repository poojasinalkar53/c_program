//find number is odd or even using no argument with return type

#include<stdio.h>
int num();
int main()
{
	num();	
}
int num()
{
	int a;
	printf("Enter the numer here ");
	scanf("%d",&a);
	if(a%2==0)
	{	
		printf("Given numbers is even");
	
	}
	else
	{
		printf("Given number is odd");
	}
	return a;
}

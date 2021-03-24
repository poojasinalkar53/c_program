#include<stdio.h>
int chakePositiveNegative(int);
int main()
{
	int num1;
	printf("Enter the number : ");
	scanf("%d",&num1);
	chakePositiveNegative(num1);
	if(num1 >=0)
	printf("%d is a positive number\n",num1);
	else
	printf("%d is a negative number\n",num1);
	return 0;
	
}
int chakePositiveNegative(int ino1)
{
	if(ino1>=0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
}

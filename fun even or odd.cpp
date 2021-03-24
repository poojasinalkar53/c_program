#include<stdio.h>
int checkEvenOdd(int);
int main()
{
	int num1,rem1;
	printf("inpute an integer : ");
	scanf("%d",&num1);
	rem1 = checkEvenOdd(num1);
	if(rem1 == 0)
	printf("%d is an even integer \n ",num1);
	else
	printf("%d is an odd integer \n ",num1);
	
	return 0;
	
}
int checkEvenOdd(int ino1)
{
	if(ino1 == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
}

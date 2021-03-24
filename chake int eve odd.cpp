#include<stdio.h>
int main()
{
	int num1,rem1;
	printf("inpute an integer :");
	scanf("%d",&num1);
	rem1=num1 % 2;
	if(num1 % 2 == 0)
	{
	
	printf("%d is an even integer\n",num1);
}
	else
{

	printf("%d is an odd integer\n",num1);
	
}
return 0;
}

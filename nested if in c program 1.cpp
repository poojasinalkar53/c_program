/*test whether gven number is even or odd and it is below 100*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	if(n<100)
	{
		printf("The given number is below 100");
		{
		
		if(n%2==0)
		{
		printf("\nThe given number is even");
		}
		else
		{
			printf("\nThe given number is odd");
		}
	}
	
	}
	else
	{
		printf("The number is not below 100");
	}
	return 0;
}

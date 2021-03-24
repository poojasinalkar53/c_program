#include<stdio.h>
int main()
{
	int n;
	printf("Even numbers upto 10\n :");
	do
	{
		if(n%2==0)
		printf("%d\t",n);
		n++;
		
	}
	while(n<=10);
}

#include<stdio.h>
int main()
{
	int n=10;
	printf("The number upto 10 are\n");
	do
	{
		printf("%d\t",n);
		--n;
	}
	while(n>=0);
	
	return 0;
}

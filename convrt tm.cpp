#include<stdio.h>
int main()
{
	float tf,tc;
	printf("\n Enter the temperature in fahrenhait = ");
	scanf("%f",&tf);
	tc=(tf-32)*5/9;
	printf("%f fahrenhait=%f celsius",tf,tc);
	return 0;
}

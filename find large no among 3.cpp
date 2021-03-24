#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("inpute the values of three numbers :");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("num1=%d,\tnum2=%d,\tnum3=%d\n",num1,num2,num3);
	if((num1 > num2) && (num1 > num3))
	printf("the num1 is the greatest amoung three. \n");
	if((num2 > num3) && (num2 > num1))
	printf("the num2 is the greatest amoung three. \n");
	if((num3 > num1) && (num3 > num2))
	printf("the num3 is the greatest amoung three. \n");
	
	return 0;
}

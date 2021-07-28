/*6.A cashier has currency notes of denomination 1, 5 and 10. 
Accept the amount to be withdrawn from the user and print the 
total number of currency notes of each denomination the cashier will have to give. */
#include<stdio.h>
int main()
{
	int w,a,b,c;
	printf("Enter the withdrown amount :");
	scanf("%d",&w);
	a=w/10;
	w=w%10;
	b=w/5;
	w=w%5;
	c=w;
	printf("The notes of 10 is %d \n The notes of 5 is %d \n The notes of 1 is %d",a,b,c);
	return 0;
	
}




#include<stdio.h>
int main()
{
	float kmph,miph;
	printf("Inpute kilometer per hour : ");
	
	scanf("%f",&kmph);
	miph=(kmph*0.6213712);
	printf("miles per hour :%f",miph);
	return 0;
}

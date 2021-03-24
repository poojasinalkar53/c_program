#include<stdio.h>
int main()
{
	int temp;
	printf("inpute the temperature of days :");
	scanf("%d",&temp);
	if(temp<0)
	printf("freezing weather.\n");
	else if(temp<10)
	printf("very cold weather.\n");
	else if(temp<20)
	printf("cold weather.\n");
	else if(temp<30)
	printf("normal in temp.\n");
	else if(temp<40)
	printf("its hot");
	else if(temp >=40)
	printf("its very hot.\n");
	return 0;
	
}

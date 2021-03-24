#include<stdio.h>
int main()
{
	int co1,co2;
	printf("inpute the values for X and Y coordinate :");
	scanf("%d%d",&co1,&co2);
	
	if(co1>0 && co2>0)
	printf("the coordinate point (%d,%d) lies in the first quadrant.\n",co1,co2);
	else if(co1<0 && co2>0)
	printf("the coordinate point (%d,%d) lies in the second quadrant.\n",co1,co2);
	else if(co1<0 && co2<0)
	printf("the coordinate point (%d,%d) lies in the third quadrant.\n",co1,co2);
	else if(co1>0 && co2<0)
	printf("the coordinate point (%d,%d) lies in the fourth quadrant.\n",co1,co2);
	else if(co1 == 0 && co2 == 0)
	printf("the coordinate point (%d,%d) lies at the origin.\n",co1,co2);
	
	return 0;
}

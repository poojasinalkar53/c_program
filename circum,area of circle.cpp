#include<stdio.h>
int main()
{
	float radius,area,circumference;
	
	printf("\nEnter the radius of circle is:");
	scanf("%f",&radius);
	circumference=(2*(3.14)*radius);
	area=((3.14)*radius*radius);
	printf("circumference:%f,area:%f",circumference,area);
	
	return 0;
}

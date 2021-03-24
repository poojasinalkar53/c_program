#include<stdio.h>
int main()
{
	float velk,velm;
	printf("\n Enter the velocity (velk) in km/hr:");
	scanf("%f",&velk);
	velm=velk*5/18;
	printf("velocity in m/sec:%f",velm);
	
	return 0;
}

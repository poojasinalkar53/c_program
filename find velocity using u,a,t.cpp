#include<stdio.h>
int main()
{
	float u,a,v;
	int t;
	printf("\n Enter the initial velocity(u),acceleration(a);time(t):");
	scanf("%f%f%d",&u,&a,&t);
	v=u+a*t;
	printf("final velocity=%f m/sec",v);
	return 0;
}

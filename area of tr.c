#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	
	printf("\nEnter the value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	printf("s=%f",s);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle:%f",area);
	return 0;
}

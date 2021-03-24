#include<stdio.h>
void main()
{
	float P,R,SI,A;
	int T;
	printf("\nEnter the value of P,R,T = ");
	
	scanf("%f%f%d",&P,&R,&T);
	SI=(P*R*T)/100;
	A=P+SI;
	printf("Simple Interest=%f,Amount=%f",SI,A);
	
	
}

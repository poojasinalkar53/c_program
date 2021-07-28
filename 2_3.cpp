/*Q3.Write a program to accept marks of three subject. Calculate the average and also display the class 
obtained.*/
#include<stdio.h>
int main()
{
	int P,M,C;
	float avg;
	printf("Enter the marks of Physics,Math,Chemistry : ");
	scanf("%d%d%d",&P,&M,&C);
	avg=(P+M+C)/3;
	printf("The avrage is %f",avg);
	if(avg>=90)
	{
	printf("\nPass with Distinction");
	}
	else if(avg>=70 && avg<90)
	{
		printf("\nPass with First class");
	}
	else if(avg>=50 && avg<70)
	{
		printf("\nPass");
	 } 
	 else
	 {
	 	printf("\nYou are failed");
	 }
	 return 0;
}

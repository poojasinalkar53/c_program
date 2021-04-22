//to calculate avg of three subject and display the class
#include<stdio.h>
int main()
{
	int marks1,marks2,marks3;
	float average;
	printf("\n Enter the marks of subject 1 : ");
	scanf("%d",&marks1);
	printf("\n Enter the marks of subject 2 : ");
	scanf("%d",&marks2);
	printf("\n Enter the marks of subject 3 : ");
	scanf("%d",&marks3);
	average=(marks1+marks2+marks3)/3;
	printf("Average is %f\n",average);
	if(average >= 70)
	{
	printf("First class with Distinction");
}
 	else if(average >= 60)
{
		printf("First class");
	}
	else if(average >= 35)
{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}

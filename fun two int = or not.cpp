#include<stdio.h>
void checkEqualNumber(int,int);
int main()
{
	int int1, int2;
	printf("inpute the values for Number1 and Number2 : ");
	scanf("%d%D",&int1,&int2);
	checkEqualNumber(int1,int2);
	return 0;
	
}
void checkEqualNumber(int ino1,int ino2)
{
	if(ino1 == ino2)
	printf("Number1 and Number2 are equal \n");
	else
	printf("Number1 and Number2 are not equal \n");
}

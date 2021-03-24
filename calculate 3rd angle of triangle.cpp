#include<stdio.h>
int main()
{
	int ang1,ang2,ang3;
	printf("inpute two angles of triangle separated by comma : ");
	scanf("%d%d",&ang1,&ang2);
	ang3=180-(ang1+ang2);
	printf(" Third angle of the triangle :%d",ang3);
	
	return 0;
	
}

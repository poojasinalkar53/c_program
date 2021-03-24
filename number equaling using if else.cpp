#include<stdio.h>
int main()
{
	int ino1,ino2;
	printf("Enter the ino1 and ino2: :");
	scanf("%d%d",&ino1,&ino2);
	
	if(ino1==ino2)
	{
		printf("ino1 and ino2 are equal \n");
	
	}
	else
	{
		printf("ino1 and ino2 are not equal \n");
	}
	return 0;
}

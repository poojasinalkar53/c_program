#include<stdio.h>
int main()
{
	int ino;
	char ch;
	
	printf("enter the ino::");
	scanf("%d",&ino);
	fflush(stdin);
	printf("enter the ch::");
	scanf("%c",&ch);
	printf("\n ch= %c ino=%d",ch,ino);
	return 0;
}

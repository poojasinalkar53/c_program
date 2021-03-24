#include<stdio.h>
void Display(int);
int main()
{
	int num1,rem1;
	printf("Inpute the number :");
	scanf("%d",&num1);
	Display(num1);
	return 0;
}
void Display(int ino)

{
	int i;
	for(i=1;i<=ino;i++)
	{
		printf("%d\t",i);
		
	}
}

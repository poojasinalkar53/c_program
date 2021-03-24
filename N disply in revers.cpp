#include<stdio.h>
void Display(int);
int main()
{
	int num1;
	printf("Inpute the number : ");
	scanf("%d",&num1);
	Display(num1);
	return 0;
	
}
void Display(int ino)
{
	
	if(ino>=1)
	{
		printf("%d\t",ino);
		Display(ino-1);
		
		
	}
}

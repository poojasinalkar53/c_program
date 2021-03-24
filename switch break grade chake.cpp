#include<stdio.h>
int main()
{
	char grd;
	printf("input the grade :");
	scanf("%c",&grd);
	
	switch(grd)
	{
			case 'E':
			printf("Excellent");
			break;
			case 'V':
			printf("Very good");
			break;
			case 'G':
			printf("Good");
			break;
			case 'A':
			printf("Average");
			break;
			case'F':
			printf("Fails\n");
			break;
			default :
			printf("Invalid grade found. \n");
			break;	
	}
}

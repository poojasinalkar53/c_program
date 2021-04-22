/*Que 1: program to chake character is digit,alphabate or punctuation
symbol*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("\nEnter the character : ");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("%c is an alphabet\n",ch);
		if(isupper(ch) ==0)
		{
			printf("%c is a lowercase alphabet\n",ch);
			printf("%c when converted to uppercase is %c\n",ch,toupper(ch));
		}
		else
		{
			printf("%c is a uppercase alphabet\n",ch);
			printf("%c when converted to lowercase is %c\n",ch,tolower(ch));
		}
	}

	else if(isdigit(ch))
	{
	
		printf("%c is a digit\n",ch);
	}

	else if(ispunct(ch))
	{
		printf("%c is a punctuation symbol\n",ch);
	}
	else
	{
		printf("Invalid Input\n");
	}
	return 0;
}

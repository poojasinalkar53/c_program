//to chake character is digit or in uppercase or in lowercase
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character : ");
	scanf("%c",&ch);
	if(ch >= 48 && ch <= 58)
	{
	
	printf("Given character is a Digit");
}
	else if(ch >= 65 && ch <= 90)
	{
	
	printf("Given character is in Uppercase");
}
	else if(ch >= 97 && ch <= 122)
	{
	
	printf("Given character is in Lowercase");
	}
	else
	{
		printf("Given character is a symbol");
	}

	return 0;
}

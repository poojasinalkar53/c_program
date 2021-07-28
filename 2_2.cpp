/* Q2.Write a program to check whether given character is digit or character in lowercase or uppercase.(Hint: 
ASCII values digit 48 to 58, 65 to 90 Uppercase and 97 to 122 Lowercase)*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if(ch>=48 && ch<=58)
	{ 
	printf("The given character is a Digit");
	}
	else if(ch>=65 && ch<=90)
	{
		printf("The given character is in Uppercase");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("The given character is in Lowercase");
	}
	else
	{
		printf("It is a special symbol");
	}
	return 0;

	}

/* Q1 Accept a character from user and check Whether the character is Vowel and Consonant.(Hint : a,e,I,o,u, 
A, E, I, O, U)*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character :");
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='o' || ch=='u' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("The given character is Vowel");
	}
	else
		printf("The given character is Consonent" );
	
	return 0;
}

/* Q5.Write a program, which accepts two integers and an operator as a character(+,-,*,/,), performs 
corresponding operation and displays the result*/
#include<stdio.h>
int main()
{
	int a,b,res;
	char ch;
	printf("Enter the two integer : ");
	scanf("%d%d",&a,&b);
	printf("\nEnter any one operator +,-,*,/ : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			res=a+b;
			printf("The sum of a & b is %d",res);
			break;
			case '-':
				res=a-b;
				printf("The sub of a & b is %d",res);
				break;
				case '*':
					res=a*b;
					printf("The mul of a & b is %d",res);
					break;
					case '/':
						res=a/b;
						printf("The division of a & b is %d",res);
						break;
	}
	return 0;
}

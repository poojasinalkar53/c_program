#include<stdio.h>
int main()
{
	int num1,num2,opt;
	printf("Enter the first integer : ");
	scanf("%d",&num1);
	printf("Enter the second integer : ");
	scanf("%d",&num2);
	printf("Inpute your option : \n");
	printf("1-addition\n 2-substraction\n 3-multiplication\n 4-division\n 5-exit\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			printf("The addition of %d and %d is : %d\n",num1,num2,num1+num2);
			break;
			case 2:
				printf("The substraction of %d and %d is : %d\n",num1,num2,num1-num2);
				break;
				case 3:
					printf("The multiplication of %d and %d is : %d\n",num1,num2,num1*num2);
					break;
					case 4:
						if(num2==0)
						{
							printf("The second integer is zero.dived by zero\n");
							
						}
						else
						{
							printf("The division of %d and %d is : %d\n",num1,num2,num1/num2);
						}
						break;
						case 5:
							default:
								printf("Inpute correct option\n");
								break;
		
	}
}

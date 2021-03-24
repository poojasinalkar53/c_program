#include<stdio.h> 
int main()
{

int day;
printf("Enter the day no : ");
scanf("%d",&day);
switch(day)
{
	case 1:
		printf("Sunday\n");
		break;
		case 2:
			printf("Monday\n");
			break;
			case 3:
				printf("Tuesaday\n");
				break;
				case 4:
					printf("Wednesday\n");
					break;
					case 5:
						printf("Tursday\n");
						break;
						case 6:
							printf("Friday\n");
							break;
							case 7:
								printf("saturday\n");
								break;
								dafault:
									printf("Invalid day\n");
									break;
									
}
return 0;
}

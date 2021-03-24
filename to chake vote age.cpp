#include<stdio.h>
int main()
{
	int vote_age;
	printf("inpute the age of the candidates : ");
	scanf("%d",&vote_age);
	if(vote_age<=18)
	{
		printf("sorry,you are not eligible to cast your vote.\n");
		printf("you would be able to cast your vote after %d year.\n",18-vote_age);

	}
	else
	{
		printf("congratulation! you are eligible for casting your vote.\n");
	}
	return 0;
}

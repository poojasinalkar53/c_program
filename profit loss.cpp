#include<stdio.h>
int main()
{
	int cprice,sprice,plamt;
	// cprice is cost price,sprice is selling price,plamt is total profit/loss
	
	printf("input cost price : ");
	scanf("%d",&cprice);
	printf("input selling price : ");
	scanf("%d",&sprice);
	if(sprice>cprice)
	{
		printf("\n you can booked your profit amount : %d\n",plamt );
		plamt=sprice-cprice;
		
	}
	else if(sprice<cprice) 
	{
		plamt=cprice-sprice;
		printf("\n you got a loss of amount : %d\n",plamt);
		
	}
	else
	{ 
	printf("\n you are running in no profit no loss condition.\n");
	}
	return 0;
}

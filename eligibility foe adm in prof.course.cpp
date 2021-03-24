#include<stdio.h>
int main()
{
	int p,c,m,t,mp;
	printf("eligibility criteria : \n");
	printf("marks in maths >=65\n");
	printf("and marks in phy >=55\n");
	printf("and marks in chem >=50\n");
	printf("and total in all three subject >=190\n");
	printf("or total in maths and physics >=140\n");
	printf("--------------------------------------\n");
	printf("inpute the marks obtained in physics :");
	scanf("%d",&p);
	printf("inpute the marks obtaind in chemistry :");
	scanf("%d",&c);
	printf("inpute the marks obtained in mathematics :");
	scanf("%d",&m);
	printf("total marks of maths,physics and chemistry : %d\n",m+p+c);
	printf("total marks of maths and physics : %d\n",m+p);
	if(m>=65)
	{
		if(p>=55)
		
		{
				if(c>=50)
				{
				
				if((m+p+c)>=190|| (m+p)>=140)
				{
					printf("the candidate is eligible for admission.\n");
					
				}
				else
				{
					printf("the candidate is not eligible.\n");
					
				}
				
						}
						else
						{
						printf("the candidate is not eligible.\n");
						
						}
					}
					else
					{
						printf("the candidate is not eligible.\n");
						
					}
				}
				else
				{
					printf("the candidate is not eligible.\n");
					
				}
				
				return 0;
	
}

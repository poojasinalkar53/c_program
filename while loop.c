/*program to print even number using
while loop,give the no inpute from user*/
#include<stdio.h>
int main()
{
	int n=0,t;
	printf("Enter the number :\n");
	scanf("%d",&t);
	while(n<=t)
	{
		if(n%2==0)
	printf("%d\t",n);
	n++;
}
return 0;

}

#include<stdio.h>
void swap();
int main()
{ 
	swap();
	
}
void swap()
{	int a,b,c;
	c=a;
	a=b;
	b=a;
	printf("Enter a,b :");
	scanf("%d%d",&a,&b);
	printf("After swapping a is %d and b is %d",b,a);

}

#include<stdio.h>
int main()
{
	int i,j,stepcount=0,swapcount=0,size,temp,arr[100];
	stepcount++;
	printf("Enter the no of elements:\n");
	stepcount++;
	scanf("%d",&size);
	stepcount++;
	printf("Enter the elements :");
	stepcount++;
	for(i=0;i<size;i++)
	{
		stepcount++;
		scanf("%d",&arr[i]);
		stepcount++;
	}
	stepcount++;
	for(i=1;i<size;i++)
	{
		stepcount++;
		j=1;
		stepcount++;
		while(j>0 && arr[j-1]>arr[j])
	{
	stepcount++;
	temp=arr[j];
	stepcount++;
	arr[j]=arr[j-1];
	stepcount++;
	arr[j-1]=temp;
	stepcount++;
	swapcount++;
}
stepcount++;
}
stepcount++;
printf("sorted arry in ascending order is :");
stepcount++;
for(i=0;i<size;i++)
{
	stepcount++;
	printf("%d\t",arr[i]);
	stepcount++;
}
stepcount++;
printf("\n stepcount is %d",stepcount);
stepcount++;
printf("\nswapcount is %d",swapcount);
stepcount++;
return 0;
stepcount++;
}













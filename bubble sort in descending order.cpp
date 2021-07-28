#include <stdio.h>
int main()
{
int array[100], n, i, j, swapcount=0,stepcount=0;
printf("Enter number of elements");
scanf("%d", &n);
printf("Enter %d Numbers:", n);
for(i = 0; i < n; i++)
scanf("%d", &array[i]);
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(array[j] < array[j+1])
{
swapcount= array[j];
array[j] = array[j+1];
array[j+1] = swapcount;
stepcount=1;
}

}
}
printf("Sorted Array:");
for(i = 0; i < n; i++)
printf("%d\t", array[i]);
return 0;
}

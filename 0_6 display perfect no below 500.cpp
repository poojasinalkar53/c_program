/* Que 6: display perfect number below 500 */

#include <stdio.h>
int main()
{
    int i, j, sum;
    printf("All Perfect numbers between 1 to 500 :\n");
    for(i=1; i<=500; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d\t ", i);
        }
    }
    return 0;
}

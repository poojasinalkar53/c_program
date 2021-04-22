/* Que 3: display  first n Fibonaci numbers */

#include <stdio.h>
 
int main()
{
    int  i,n,a = 0,b = 1,nextdigit;
 
    printf("Enter the number of terms :\n ");
    scanf("%d",&n);
    printf("First %d FIBONACCI numbers are ... \n", n);
    for (i=1;i<=n;++i)
    {
        printf("%d\t",a);
        nextdigit = a+b;
        a=b;
        b=nextdigit;
    }
    
   return 0;
}

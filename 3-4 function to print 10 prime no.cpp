/*Que 3: function to print first prime no,if it is prime return 1 otherwise 0*/ 
#include <stdio.h>
int isPrime(int n);
int main()
{
    int  i=2,j=0 ,flag;
while(j!=10)
    {
        flag = isPrime(i);
        if(flag == 1)
        {
            j++;
            printf("%d ",i);
  }
  i++;  
    }
    return 0;
}
int isPrime(int n)
{
    int j, flag = 1;
    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}

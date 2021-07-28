#include<stdio.h>
#include<math.h>
int H,M,S,S1;
int time(int H,int M,int S,int S1);
int main()
{
    printf("Program to increment time.\n");

    printf("Enter your current value of Hours.:  \n");
    scanf("%d", &H);

    printf("Enter your current value of Min.:  \n ");
    scanf("%d", &M);

    printf("Enter the current value of second.:   \n");
    scanf("%d", &S);

    printf("Enter the seconds which you want to increment.:  \n");
    scanf("%d", &S1);
    time(H,M,S,S1);
    return 0;
}

int time(int H,int M,int S, int S1) 
{
int second;
 S=H*3600+M*60+S;
second=S+S1;
H=second/3600;
M=(second-H*3600)/60;
printf("When addind %d second we get The New Hours:%d \n The New Minute :%d\n The New second:%d\n ",S1,M,H,second);
}

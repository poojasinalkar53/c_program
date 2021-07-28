/*Ass_1:Q1.Write a C program to read n numbers from the user and 
sort them in ascending/ descending order using Bubble sort method. 
Use step count & swapcount in your program and display it at end.*/
#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;
    int swapcount=0,stepcount=0;
	stepcount=stepcount+1;
    printf("\n Enter the Number of Elements  :  ");
    scanf("%d", &n);
    stepcount++; 
    printf("\n Enter the Array Elements  :  ");
    for(i = 0; i < n; i++)
    
		 scanf("%d", &a[i]);
		stepcount++; 	
    for(i = 0; i < n - 1; i++)
    {	stepcount++;
        for(j = 0; j < n - i - 1; j++)
        {	stepcount++; 
            if(a[j] > a[j + 1])//for desc a[j] < a[j+1]
            {	stepcount++;
                temp = a[j];
                stepcount++;
                a[j] = a[j + 1];
                stepcount++;
                a[j + 1] = temp;
                swapcount++;
                stepcount++;  
            } 
			stepcount++; 
        }
        stepcount++;    
    }
    stepcount++;

    printf("\n The Sorted Arry in ascending Order : ");
    
    for(i = 0; i < n; i++)
    {	stepcount++;
        printf(" %d \t", a[i]); 
		
    }
    printf("\nstepcount=%d swapcount=%d",stepcount,swapcount);
    return 0;
}

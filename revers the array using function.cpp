//Q1:revers the elements of an array using function.
#include<stdio.h>
void ArrayReverese(int a[], int Start, int End);
void printArray(int a[], int Size);

int main() 
{
   int a[100], i, Size;
 
   printf("\nPlease Enter the size of an array: ");
   scanf("%d",&Size);
   
   //Inserting elements into the Declared Array
   for (i = 0; i < Size; i++) 
   {
      scanf("%d", &a[i]);
   }

    ArrayReverese(a, 0, Size-1);//Array Reverse
    printf("Result of an Reverse array is: \n");
    printArray(a, Size); //Printing Array    
    return 0;
}

/* Function to Reverse the Given Array */
void ArrayReverese(int a[], int Start, int End)
{
   int Temp;
   while (Start < End) 
   {
      Temp = a[Start];
      a[Start] = a[End];
      a[End] = Temp;
      Start++;             
      End--;         
   }  
}     

/* Function to print the Array Output */
void printArray(int a[], int Size)
{
  int i;
  for (i = 0; i < Size; i++) 
   {
      printf("%d ", a[i]);
   }
  printf("\n");
}

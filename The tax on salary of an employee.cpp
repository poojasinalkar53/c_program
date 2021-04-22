/* Name:Sinalkar pooja dilip Roll No :24
 Q1 : Write a program, which accepts annual basic salary of an employee and calculate and display the Income tax as per the following rules.
Basic: <1,50,000,tax=0 if salary is 1,50,000 to 3,00,000,tax=20% if salary>3,00.000 and tax=30% */

#include<stdio.h>
#include<math.h>
int main()
{
 float salary,tax;
 printf("Enter the salary of an employee :");
 scanf("%f",&salary);
 if(salary<150000)
 //conditon 1:if the salary of an employee <1,50,000 then print tax=0
 {
  tax=0;
  printf("tax = %f",tax);
 }
 else if(salary>=150000 && salary<=300000)
 //condition 2: if the salary of an employee between 1,50,000 to 3,00,000 then print tax=20% of salary
 {
  tax=(salary*0.2);
  printf("tax = %f",tax);
 }
 else if(salary>300000)
 //conditon 3:if the salary of an employee greater the 3,00,000 then print tax=30% of salary
 {
  tax=(salary*0.3);
  printf("tax = %f",tax);
 }
 return 0;
}

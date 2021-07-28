/*Q4.Write a program, which accepts annual basic salary of an employee and calculate and display the Income 
tax as per the following rules.
Basic: <1,50,000 Tax=0
 1,50,000 to 3,00,000 Tax=20%
 >3,00,000 Tax=30%*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	float sal,tax;
 	printf("Enter the salary of an employee:");
 	scanf("%f",&sal);
 	if(sal<=150000)
 	{
 		tax=0;
 		printf("You do not have to pay tax");
	 }
	 else if(sal>=150000 && sal<=300000)
	{
		tax=sal*0.2;
		printf("You have to pay tax=%f",tax);
	}
	else if(sal>300000)
	{
		tax=sal*0.3;
		printf("You have to pay tax=%f",tax);
	}
	return 0;	
 }

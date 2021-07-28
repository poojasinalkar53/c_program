/*Q2.Accept inner and outer radius of a ring and
 print the perimeter and area of the ring */
 #include<stdio.h>
 int main()
 {
 	float a,b,perimeter,area;//a=inner radus of ring and b=outer radis of ring

 	const float pi=3.14;
 	
 	printf("Enter the inner and outer radius of a ring :");
 	scanf("%f%f",&a,&b);
 	perimeter=(2*pi)*(a+b);//formula for perimeter of ring
	area=pi*((b*b)-(a*a));//formula for area of ring
	 printf("The perimeter of a ring is %f \nThe area of a ring is %f ",perimeter,area);
	 return 0;
 }

/*Q1.Accept dimensions of a cylinder and 
print the surface area and volume */

#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,S_A,v;
	printf("Enter the radius of cylinder and height of cylinder  :");
	scanf("%f%f",&r,&h);
	S_A=(2*(22/7)*r*r)+(2*(22/7)*r*h);
	v=(22/7)*r*r*h;
	printf("The surface area of cylinder is %f\n The volume of cylinder is %f",S_A,v);
	return 0;
}


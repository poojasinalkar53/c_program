	/*Q7 calculate the area of square,rectangle & triangle */
    
    #include<stdio.h>
   int main()
   {
	int choice,s,l,w,b,h;//s=side,l=length,w=width,b=base,h=hight
	float area;
	printf("Inpute 1 for area of square\n");
	printf("Inpute 2 for area of rectangle\n");
	printf("Inpute 3 for area of triangle\n");
	printf("Inpute your choice : ");
	scanf("%d",&choice);
	swith(c)
	case 1:
	printf("Inpute radius of the circle : ");
	scanf("%d",&s);	
	area=s*s;
	break;
	case 2:
	printf("Inpute length and width of the rectangle : ");
	scanf("%d%d",&l,&w);
   area=l*w;
   break;
	case 3:
   printf("Inpute the base and hight of the triangle : ");
	scanf("%d%d",&b,&h);
	area=0.5*b*h;
	break;
					
	}
	printf("The area is : %f\n",area);
 return 0;	
}

	// area of circle = 3.14 *r*r;

#include<stdio.h>
#define PI 3.14 

float r,area;
main()
{
	//float r,area;
	printf("Enter radius :");
	scanf("%f",&r);
	
	area=PI*r*r;
	printf("Area of circle is : %.2lf",area);
	
		
	
}


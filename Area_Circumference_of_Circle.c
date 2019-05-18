//Calculation of Area and Circumference of a circle
#include<stdio.h>
int main()
{
	float r,area,circumference;		//r=radius	
	printf("Enter the radius of the  circle:");
	scanf("%f",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("\nArea of the cricle is:%f",area);
	printf("\nCircumference of the circle is:%f",circumference);
	return 0;
}

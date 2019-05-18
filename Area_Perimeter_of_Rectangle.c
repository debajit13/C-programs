//Calculation of area and perimeter of a rectangele
#include<stdio.h>
int main()
{
	int l,b;
	float peri,area;
	printf("Enter the length and breath of the rectangle:");
	scanf("%d%d",&l,&b);
	area=(l*b);
	peri=2*(l+b);
	printf("\nArea is:%f",area);
	printf("\nPerimeter is:%f",peri);
	return 0;
}

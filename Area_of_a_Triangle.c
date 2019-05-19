//Calculation of area of a triangle
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;	//a,b,c are the lengths of the three sides of the triangle
	float s,area;
	printf("Enter the length of the three sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c && (b+c)>a && (a+c)>b)	//we know that for a triangle to exist the sum of any two sides of a triangle must be greater than the third side.
	{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("\nArea of the Triangle is:%f",area);
	}
	else
		printf("\nTriangle is not possible");
	return 0;
}

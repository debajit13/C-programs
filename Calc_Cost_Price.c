//Find the cost price
#include<stdio.h>
int main()
{
	float sp,pr,cp;		//sp=selling price,		pr=profit,		cp=cost price
	printf("Enter the total selling price of the 15 items:");
	scanf("%f",&sp);
	printf("\nEnter the total profit:");
	scanf("%f",&pr);
	cp=(sp-pr)/15;
	printf("\nThe cost price of each item is:%f",cp);
	return 0;
}

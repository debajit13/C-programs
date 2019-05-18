//Calculation of Gross Salary
#include<stdio.h>
int main()
{
	float bs,da,hra,gs;	//bs=basic salary, da=dearness allowance, hra=house rent allowance, gs=gross salary
	printf("Enter the basic salary:");
	scanf("%f",&bs);
	da=bs*40/100;
	hra=bs*20/100;
	gs=bs+hra+da;
	printf("\nGross Salary is:%f",gs);
	return 0;
}

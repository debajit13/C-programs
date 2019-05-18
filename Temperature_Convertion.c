//Temperature Convertion
#include<stdio.h>
int main()
{
	float f,c;	//f=Fahrenheit temperature	c=Celcius Temperature 
	printf("Enter the temperature in fahrenheit:");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("\nTemperature in Celcius is:%f",c);
	return 0;
}

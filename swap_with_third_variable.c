//Swapping two number with third variable
#include<stdio.h>
int main()
{
	int a,b,temp;	//a=1st number, b=2nd number
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	printf("\nNumbers before swapping:%d %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nNumbers after swapping:%d %d",a,b);
	return 0;
}

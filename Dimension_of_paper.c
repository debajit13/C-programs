//Calculation of paper dimension
#include<stdio.h>
int main()
{
	float l,b,temp;		//l=length of the paper, 	b=breath of the paper 
	int i;
	printf("Enter the dimension of paper size A0:");
	scanf("%f%f",&l,&b);
	for(i=1;i<=8;i++)
	{
		temp=l;
		l=b;
		b=temp/2;
		printf("\nDimesion of paper size A%d:%f X %f",i,l,b);
	}
	return 0;
}

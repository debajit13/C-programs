//Check whether the sum of squares of sine  and cosine of an angle is 1 or not
#include<stdio.h>
#include<math.h>
int main()
{
	float d;	//d=angle in degrees
	int sum;	//sum=sum of sine  and cosine of the d angle
	printf("Enter the value of the angle in degrees:");
	scanf("%f",&d);
	sum=(sin(d)*sin(d))+(cos(d)+cos(d));
	if(sum==1)
		printf("\nSum of squares of sine and cosine is 1");
	else
		printf("\nSum of square of sine and cosine is not 1");
	return 0;
}

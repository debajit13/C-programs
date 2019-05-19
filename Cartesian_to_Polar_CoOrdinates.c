//Convert from Cartesian to Polar co-ordinate
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	float r,theta;
	printf("Enter the Cartesian Co-ordinates(x,y):");
	scanf("%d%d",&x,&y);
	r=sqrt((x*x)+(y*y));
	theta=atan(y/x);	//atan() is a function to find the tan inverse
	printf("\nThe value is Polar Co-ordinate is:(%.2f,%.2f)",r,theta);
	return 0; 
}

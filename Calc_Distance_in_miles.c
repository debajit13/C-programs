//program to receive values of latitude and longitude in degress, of two places on earth and outputs the distance between them in nautical miles. The formula for distance in nautical.
#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2,D;	//l1 amd l2 are the latitude and g1 and g2 are the longitude and D is the distance between the two places
	printf("Enter the two latitude values:");
	scanf("%f%f",&l1,&l2);
	printf("Enter the two values of longitude:");
	scanf("%f%f",&g1,&g2);
	D=3963*acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));	//Formula for calculating distance
	printf("\nDistance between the two places in miles:%f",D);
	return 0;
}

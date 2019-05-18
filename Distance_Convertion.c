//Distance Convertion
#include<stdio.h>
int main()
{
	float km,m,cm,ft,inch;	//km=kilometers, m=meters, cm=centimeters, ft=foots, inch=inches
	printf("Enter the distance is kilometers:");
	scanf("%f",&km);
	m=km*10e3;
	cm=km*10e5;
	ft=km*3280.84;
	inch=km*39370.1;
	printf("\nDistance in meters:%fm",m);
	printf("\nDistance in centimeters:%fcm",cm);
	printf("\nDistance in inches:%finch",inch);
	printf("\nDistance in foots:%ffoot",ft);
	return 0;
}

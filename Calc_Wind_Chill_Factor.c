//Calculate Wind chill factor
#include<stdio.h>
#include<math.h>
int main()
{
	float wcf,t,v;	//wcf=wind chill factor		t=temperature 	v=velocity
	printf("Enter the temperature:");
	scanf("%f",&t);		
	printf("Enter the wind velocity:");
	scanf("%f",&v);
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(0.16,v);	//formula to calculate wind chill factor
	printf("\nThe Wind Chill Factor is:%.3f",wcf);
	return 0;
}

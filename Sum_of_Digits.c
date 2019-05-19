//Calculate sum of digits
#include<stdio.h>
int main()
{
	int sum=0,r,n;	//r=remainder, sum=sum of digits, n=number
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("\nSum of digits:%d",sum);
	return 0;
}

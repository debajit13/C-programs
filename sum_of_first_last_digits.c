//Sum of the first and last digits
#include<stdio.h>
int main()
{
	int fd,ld,n,sum;	//fd=first digit	ld=last digit	
	printf("Enter the number:");
	scanf("%d",&n);
	ld=n%10;
	fd=n;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=ld+fd;
	printf("\nSum of the first and last digits:%d",sum);
	return 0;
}

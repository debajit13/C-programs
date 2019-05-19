//Calculate the least number of notes to be used to represent any Rs.
#include<stdio.h>
int main()
{
	int rs1,rs2,rs5,rs10,rs50,rs100,n,temp=0;
	printf("Enter the Amount:");
	scanf("%d",&n);	//n is the total amount 
	rs100=n/100;	//Calculate the number of notes of Rs.100
	temp=n%100;
	rs50=temp/50;	//Calculate the number of notes of Rs.50
	temp=temp%50;
	rs10=temp/10;	//Calculate the number of notes of Rs.10
	temp=temp%10;
	rs5=temp/5;		//Calculate the number of notes of Rs.5
	temp=temp%5;
	rs2=temp/2;		//Calculate the number of notes of Rs.2
	rs1=temp%2;		//Calculate the number of notes of Rs.1
	printf("\nNo of notes of Rs.100: %d",rs100);
	printf("\nNo of notes of Rs.50: %d",rs50);
	printf("\nNo of notes of Rs.10: %d",rs10);
	printf("\nNo of notes of Rs.5: %d",rs5);
	printf("\nNo of notes of Rs.2: %d",rs2);
	printf("\nNo of notes of Rs.1: %d",rs1);
	return 0;
}

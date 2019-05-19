//Add one with each digit of the number
#include<stdio.h>
int main()
{
	int r,num,temp,sum=0,i,temp_sum=0;	
	printf("Enter the number:");
	scanf("%d",&num);	//num=number we take
	while(num!=0)	//here we use two loops. This first loop increment all digits by 1 and get the  reverse number 
	{
		r=num%10;
		temp=r+1;
		if(temp==10)
			temp=0;
		num=num/10;
		sum=(sum*10)+temp;
	}
	
	while(sum!=0)	//this is the second loop which again reverse the number so we get the incremented normal number
	{
		i=sum%10;
		sum=sum/10;
		temp_sum=(temp_sum*10)+i;
	}
	printf("\nFinal number after adding 1 is:%d",temp_sum);
	return 0;
}

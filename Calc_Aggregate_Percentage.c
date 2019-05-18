//Aggregate Marks and Percentage Marks Calculation
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;	//s1,s2,s3,s4 and s5 are the marks of 5 subjects within 100
	float agre,per;		//agre=aggregate marks,	per=percentage marks
	printf("Enter the marks of students:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	agre=total/5;
	per=total/5;
	printf("\nAggregate marks is:%f",agre);
	printf("\nPercentage marks is:%f",per);
	return 0;
}

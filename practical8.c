/* write a c program to use goto statement. program to calculate the sum and average of positive numbers 
if the user enter a negative number the sm and average are displays */ 

#include<stdio.h>
int main()
{
	const int maxinput=5;
	int i;
	double number, average, sum=0.0;
	for(i=1; i<=maxinput; ++i)
{
	printf("%d enter the number :",i);
	scanf("%if",&number);
	if(number<0.0)
	{
		goto jump;
	}
	sum+=number;
}
	jump:
	average=sum/(i-1);
	printf("sum=%2d\n",sum);
	printf("average=%2d",average);
	return 0;
}



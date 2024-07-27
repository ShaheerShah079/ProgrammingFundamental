#include<stdio.h>
float sum (float x,float y,float z)
{
	float sum;
	sum=x+y+z;
	return sum;
}



int main()
{
	float c,num1,num2,num3;
	printf("Enter three number\n");
	scanf("%f %f %f",&num1,&num2,&num3);
	c=sum(num1,num2,num3);
	printf("The sum of these three number is %.2f",c);
	
	
	return 0;
}

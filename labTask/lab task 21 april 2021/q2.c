#include<stdio.h>
int sum(int a,int b )
{
	int sum;
	sum=a+b;
	printf("The sum of two number is %d",sum);
}
int main()
{
	int num1,num2;
	printf("Enter two number\n");
	scanf("%d %d",&num1,&num2);
	sum(num1,num2);
		return 0;
}

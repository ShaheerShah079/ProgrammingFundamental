#include<stdio.h>
int factorial(int a)
{
	int fact=1;
	for(;a!=1;a--)
	{
		fact*=a;
	}
	return fact;
}
int main()
{
	int num1;
	printf("Enter a number \n");
	scanf("%d",&num1);
	printf("The factorial of the number is %d",factorial(num1));
	return 0;
}

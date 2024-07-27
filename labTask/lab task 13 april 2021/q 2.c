#include<stdio.h>
int factorial(int x)
{
	int i,fact=1;
	for(i=x;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
	
 } 


int main()
{
	int num1;
	printf("Enter a number to find factorial\n");
	scanf("%d",&num1);
	printf("factorial of givent number is %d",factorial(num1));
	
	return 0;
}

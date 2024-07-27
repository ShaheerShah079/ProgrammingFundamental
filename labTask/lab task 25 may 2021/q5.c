#include<stdio.h>
int prime(int n)
{
	static int check=2;
	if(n%check==0&&n!=check)
	{
		return 0;
	}
	if(n%check==0&&n==check)
	{
		return 1;
	}
	check++;
	prime(n);
	
}
int main()
{
	printf("\nEnter a number to check it is prime or not\n");
	int num1;
	scanf("%d",&num1);
	int result=prime(num1);
	if(result==0)
	{
		printf("Not a prime number\n");
	}
    if(result==1)
    {
    	printf("Prime number\n");	
	}
	return 0;
}

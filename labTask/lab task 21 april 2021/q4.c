#include<stdio.h>
int check(int a)
{
	if(a%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int num1;
	printf("Enter a number\n");
	scanf("%d",&num1);
	if(check(num1)==0)
	{
	printf("The entered number is even");	
	}
	else
	{
	printf("The enter number is odd");
    }
	return 0;
}

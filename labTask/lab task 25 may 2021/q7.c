#include<stdio.h>
int fab(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if (n==1||n==2)
	{
		return 1;
	}
	else
	{
		return fab(n-1)+fab(n-2); 
	}
	
}
int main()
{
	printf("Enter A number to find its Fibonacci series\n");
	int num1;
	scanf("%d",&num1);
	printf("The Fibonacci ans is : %d",fab(num1));
	return 0;
}

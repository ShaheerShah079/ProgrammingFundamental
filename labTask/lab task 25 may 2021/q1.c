#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+sum(n-1); 
	}
	
}
int main()
{
	printf("Enter a number to find their sum\n");
	int sumval;
	scanf("%d",&sumval);
	printf("The sun is : %d",sum(sumval));
	return 0;
}

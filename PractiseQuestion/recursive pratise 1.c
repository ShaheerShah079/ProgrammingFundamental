#include<stdio.h>
int func(int n)
{
	if(n==0)
	{
		return 2;
	}
	else
	{
		return pow(2,func(n-1)); 
	}
	
}
int main()
{
	printf("%d",10%6);
	return 0;
}

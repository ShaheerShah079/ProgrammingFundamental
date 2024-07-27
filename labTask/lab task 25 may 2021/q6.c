#include<stdio.h>
int binary(int n)
{
	int mood;
	static int multi=1,bin=0;
		mood=n%2;
		bin=bin+(multi*mood);
		multi*=10;
		n/=2;
		 if(n==0)
		 {
			return bin;
	     	}
		 binary(n);
}
int main()
{
	int num1,mood,multi=1,bin=0;
	printf("Enter a number to printf its Binary\n");
	scanf("%d",&num1);
	int result=binary(num1);
	printf("\nThe Binary of this decimal number is %d",result);	
	return 0;
}

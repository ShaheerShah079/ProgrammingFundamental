#include<stdio.h>
int lcm(int m,int n)
{
	static int ans=1;
	if(ans%m==0&&ans%n==0)
	{
		return ans;
	}
	else
	{
	ans++;
		return 0;
	}

	
}
int main()
{
	int num1,num2,result;
	printf("Enter two number two find their lcm\n");
	scanf("%d %d",&num1,&num2);
	ss:
	result=lcm(num1,num2);
	if(result==0)
	{
	goto ss;	
	}
	else
	printf("The lcm of these two number is %d",result);
	return 0;
}

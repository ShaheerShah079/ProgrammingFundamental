#include<stdio.h>
int lcm(int m,int n)
{
	static int ans=1;
	if(ans%m==0&&ans%n==0)
	{
		return ans;
	}
	ans++;
	lcm(m,n);
	
}
int main()
{
	int num1,num2,result;
	printf("Enter two number two find their lcm\n");
	scanf("%d %d",&num1,&num2);
	result=lcm(num1,num2);
	printf("The lcm of these two number is %d",result);
	return 0;
}

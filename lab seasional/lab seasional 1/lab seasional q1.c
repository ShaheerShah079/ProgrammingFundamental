#include<stdio.h>
int main()
{
	int x,y,i,ans=1;
	printf("Enter a value\n ");
	scanf("%d",&x);
	printf("Enter their power\n ");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("Your answer is %d",ans);
	return 0;
}

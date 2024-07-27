#include<stdio.h>
int main()
{
	int year,month;
	printf("Enter year and month number\n");
	scanf("%d",&year); 
	scanf("%d",&month);
	if(month==2)
	{
		if(year%4==0)
		{
			printf("29");
		}
		else
		{
			printf("28");
		}
	}
	else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		printf("31");
	}
	else
	{
		printf("30");
	}
	return 0;
}
